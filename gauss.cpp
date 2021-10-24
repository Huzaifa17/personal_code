#include <bits/stdc++.h>
using namespace std;

std::vector<double> gauss()
{
	int i, j, k, n, m;
	cin >> n;
	double arr[n][n + 1];
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < n; ++i)
	{
		int id = i;
		for (j = i + 1; j < n; ++j)
		{
			if (fabs(arr[j][i]) > fabs(arr[id][i]))
			{
				id = j;
			}
		}
		if (id != i)
		{
			for (j = i; j <= n; ++j)
			{
				swap(arr[i][j], arr[id][j]);
			}
		}
		for (j = 0; j < n; ++j)
		{
			if (i != j)
			{
				double fraction = arr[j][i] / arr[i][i];
				for (k = i; k <= n; k++)
				{
					arr[j][k] -= (fraction * arr[i][k]);
				}
			}
		}
	}
	std::vector<double> v;
	for (i = 0; i < n; ++i)
	{
		v.push_back(arr[i][n] / arr[i][i]);
	}
	return v;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	std::vector<double> v2 = gauss();
	for (i = 0; i < v2.size(); ++i)
	{
		cout << "X" << i + 1 << ": " << v2[i] << endl;
	}
	return 0;
}
