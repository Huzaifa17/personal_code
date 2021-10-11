#include <bits/stdc++.h>
using namespace std;
std::vector<int> v[100005];
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

void divisors(int n)
{
	int i, j, k, m;
	for (i = 1; i <= n; ++i)
	{
		for (j = i; j < n; j += i)
		{
			v[j].push_back(i);
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
	n++;
	divisors(n);
	for (i = 1; i < n; ++i)
	{
		cout << i << " :";
		for (j = 0; j < v[i].size(); ++j)
		{
			cout << " " << v[i][j];
		}
		cout << endl;
	}
	return 0;
}
