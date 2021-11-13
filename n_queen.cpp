#include <bits/stdc++.h>
using namespace std;

bool valid(int ** arr, int x, int y, int n)
{
	for (int i = 0; i <= x; ++i)
	{
		if (arr[i][y] == 1)
		{
			return false;
		}
	}
	int i = x, j = y;
	while (i >= 0 && j >= 0)
	{
		if (arr[i][j] == 1)
		{
			return false;
		}
		i--;
		j--;
	}
	i = x, j = y;
	while (i >= 0 && j < n)
	{
		if (arr[i][j] == 1)
		{
			return false;
		}
		i--;
		j++;
	}
	return true;
}


bool n_queen(int **arr, int x, int n)
{
	if (x >= n)
	{
		return true;
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if (valid(arr, x, i, n))
		{
			arr[x][i] = 1;
			if (n_queen(arr, x + 1, n))
			{
				return true;
			}
			arr[x][i] = 0;
		}
	}
	return false;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	int **arr = new int *[n];
	for (i = 0; i < n; ++i)
	{
		arr[i] = new int [n];
		for (j = 0; j < n; ++j)
		{
			arr[i][j] = 0;
		}
	}
	if (n_queen(arr, 0, n))
	{
		cout << n << endl;
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "sorry!!!" << endl;
	}
	return 0;
}
