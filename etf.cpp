#include <bits/stdc++.h>
using namespace std;

int phi[100001];
int arr[100001];

void etf(int n)
{
	int i, j, k, m, p;
	for (i = 1; i <= n; ++i)
	{
		phi[i] = i;
	}
	for (i = 2; i <= n; ++i)
	{
		if (!arr[i])
		{
			for (j = i; j <= n; j += i)
			{
				arr[j] = 1;
				phi[j] -= (phi[j] / i);
			}
		}
	}
	return ;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	etf(n);
	for (i = 1; i <= n; ++i)
	{
		cout << phi[i] << endl;
	}
	return 0;
}
