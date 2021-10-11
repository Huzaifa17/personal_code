#include <bits/stdc++.h>
using namespace std;
int arr[100001];
std::vector<int> v;
int sieve(int n)
{
	int i, j, k, m, count = 0;
	arr[1] = 1;
	arr[2] = 0;
	for (i = 3; i * i <= n; i += 2)
	{
		if (!arr[i])
		{
			count++;
			v.push_back(i);
			for (j = i * i; j <= n; j += (2 * i))
			{
				arr[j] = 1;
			}
		}
	}
	return count;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	cout << "Total: " << sieve(n) << endl;
	for (i = 1; i <= n ; i += 2)
	{

		if (!arr[i])
		{
			cout << i << endl;
		}
	}
	return 0;
}
