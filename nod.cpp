#include <bits/stdc++.h>
using namespace std;
int bigmod(int a, int m)
{
	if (a / 2 == 0)
	{
		return (1 % m);
	}
	int x = 0;
	if (a % 2 == 1)
	{
		x = 1;
	}
	a = (2 * bigmod(a / 2, m)) % m;
	a += x;
	return a;
}

int nod(int n, int mod)
{
	int ans = 1, i, j, k, m;
	for (i = 2; i <= n; ++i)
	{
		if (n % i == 0)
		{
			m = 1;
			while (n % i == 0)
			{
				n /= i;
				m++;
			}
			ans *= m;
			ans = bigmod(ans, mod);
		}
	}
	return ans;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> t >> m;
	for (i = 0; i < t; ++i)
	{
		cin >> n;
		cout << nod(n, m) << endl;
	}
	return 0;
}
