#include <bits/stdc++.h>
using namespace std;

int find(int wt[], int tk[], int n, int w)
{
	if (n < 0 || w == 0)
	{
		return 0;
	}
	if (wt[n] > w)
	{
		return find(wt, tk, n - 1, w);
	}
	return max(find(wt, tk, n - 1, w), tk[n] + find(wt, tk, n - 1, w - wt[n]));
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m;
	cin >> n >> m;
	int w[n], t[n];
	for (i = 0; i < n; ++i)
	{
		cin >> w[i];
	}
	for (i = 0; i < n; ++i)
	{
		cin >> t[i];
	}
	cout << find(w, t, n - 1, m) << endl;
	return 0;
}
