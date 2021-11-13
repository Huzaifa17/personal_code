#include <bits/stdc++.h>
using namespace std;

void permutation(char arr[], int i, int n)
{
	static int c;
	if (i == n)
	{
		c++;
		cout << c << " :";
		for (int j = 0; j <= n; ++j)
		{
			cout << " " << arr[j];
		}
		cout << endl;
		return ;
	}
	for (int j = i; j <= n; ++j)
	{
		swap(arr[i], arr[j]);
		permutation(arr, i + 1, n);
		swap(arr[i], arr[j]);
	}
	return ;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	char arr[n + 5];
	cin >> arr;
	permutation(arr, 0, n - 1);
	return 0;
}
