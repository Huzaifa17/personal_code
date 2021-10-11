#include <bits/stdc++.h>
using namespace std;
long long int bigmod(long long int a, long long int m)
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
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int i, j, k, n, m, t;
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		cin >> n >> m;
		cout << bigmod(n, m) << endl;
	}
	return 0;
}
