#include <bits/stdc++.h>
using namespace std;

int egcd(int a, int b, int &x, int &y)
{
	if (a == 0)
	{
		x = 0;
		y = 1;
		return b;
	}
	int x1, y1;
	int d = egcd(b % a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		cin >> n >> m;
		cout << "GCD: " << egcd(n, m, k, j) << endl;
		cout << "X: " << k << " Y: " << j << endl;
	}
	return 0;
}
