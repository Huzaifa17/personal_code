#include <bits/stdc++.h>
using namespace std;
int bs(std::vector<string> v, string s)
{
	int i, j, k, l, r, mid;
	l = 0;
	r = v.size() - 1;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (v[mid] == s)
		{
			return mid;
		}
		else if (v[mid] > s)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return -1;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	std::vector<string> v(n);
	for (i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	string s;
	cin >> s;
	k = bs(v, s);
	if (k != -1)
	{
		cout << "Found!!! " << k + 1 << endl;
	}
	else
	{
		cout << "Sorry!!!" << endl;
	}
	return 0;
}
