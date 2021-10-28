#include <bits/stdc++.h>
using namespace std;

std::vector<int> sieve(int n)
{
	int i, j, k, m, lim, p;
	lim = sqrt(n) + 1;
	int arr[lim + 1] = {0};
	std::vector<int> v;
	if (lim + 1 < 2)
	{
		return v;
	}
	v.push_back(2);
	for (i = 3; i <= lim; i += 2)
	{
		if (!arr[i])
		{
			v.push_back(i);
			for (j = i * i; j <= lim; j += (2 * i))
			{
				arr[j] = 1;
			}
		}
	}
	return v;
}

std::vector<int> seg_sieve(int a, int b)
{
	std::vector<int> v = sieve(b);
	int i, j, k, arr[b - a + 1] = {0};
	if (a < 2)
	{
		for (i = a; i < 2 && i <= b; ++i)
		{
			arr[i - a] = 1;
		}
	}
	for (i = 0; i < v.size(); ++i)
	{
		int source = (a / v[i]) * v[i];
		if (source < a)
		{
			source += v[i];
		}
		for (j = source; j <= b; j += v[i])
		{
			arr[j - a] = 1;
		}
		if (v[i] >= a && v[i] <= b)
		{
			arr[v[i] - a] = 0;
		}
	}
	std::vector<int> v2;
	for (i = 0; i <= b - a ; ++i)
	{
		if (arr[i] == 0)
		{
			v2.push_back(i + a);
		}
	}
	return v2;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	std::vector<int> v = seg_sieve(n, m);
	for (i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	return 0;
}
