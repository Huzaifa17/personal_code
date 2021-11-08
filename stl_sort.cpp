#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	string s;
	std::vector<string> v;
	for (i = 0; i < n; ++i)
	{
		cin >> s;
		v.push_back(s);
	}
	for (i = 0; i < n; ++i)
	{
		cout << v[i] << endl;
	}
	sort(v.begin(), v.end());
	for (i = 0; i < n; ++i)
	{
		cout << v[i] << endl;
	}
	cout << endl;
	return 0;
}
