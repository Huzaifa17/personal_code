#include <bits/stdc++.h>
using namespace std;

int arr[100000001], count = 0;
std::vector<int> v;

std::vector<int> sieve(int n)
{
	int i, j, k, m, count = 0;
	std::vector<int> v2;
	arr[1] = 1;
	arr[2] = 0;
	n = sqrt(n) + 1;
	v2.push_back(2);
	for (i = 3; i <= n; i += 2)
	{
		if (!arr[i])
		{
			count++;
			v2.push_back(i);
			for (j = i * i; j <= n; j += (2 * i))
			{
				arr[j] = 1;
			}
		}
	}
	return v2;
}

void seg_sieve(int a, int b)
{
	int i, curr, base, j, k, n, m;
	std::vector<int> v3 = sieve(b);
	n = b - a + 1;
	for (i = 0; i < v3.size(); ++i)
	{
		curr = v3[i];
		base = (a / curr) * curr;
		if (base < a)
		{
			base += a;
		}
		for (j = base; j <= b; j += curr)
		{
			arr[j - a] = 1;
		}
		if (curr == base)
		{
			arr[curr - a] = 0;
		}
	}
	for (i = 0; i < b - a + 1; ++i)
	{
		if (!arr[i])
		{
			cout << i + a << endl;
		}
	}
	return ;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	seg_sieve(n, m);
	return 0;
}
