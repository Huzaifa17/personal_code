#include <bits/stdc++.h>
using namespace std;
int bigmod(int a, int b, int m)
{
	if (b == 0)
	{
		return (1 % m);
	}
	int x;
	x = bigmod(a, b / 2, m);
	x = ((x % m) * (x % m)) % m;
	if (b % 2 == 1)
	{
		x = (x * (a % m)) % m;
	}
	return x;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		cin >> n >> m >> k;
		cout << "The bigmod of (" << n << "," << m << "," << k << ")" << bigmod(n, m, k) << endl;
	}
	return 0;
}
