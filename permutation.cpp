#include <bits/stdc++.h>
using namespace std;

void display(vector<int> a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	std::vector<int> v(n);
	for (i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	do
	{
		display(v, n);
	}
	while (next_permutation(v.begin(), v.end()));
	return 0;
}
