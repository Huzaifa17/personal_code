#include <bits/stdc++.h>
using namespace std;
int c, ind;
void binary_search(int arr[], int n, int tar)
{
	int i, j, k, hi, lo;
	hi = n - 1;
	lo = 0;
	int mid = (lo + hi) / 2;
	while (hi >= lo)
	{
		if (arr[mid] == tar)
		{
			c = 1;
			ind = mid;
			break;
		}
		else if (arr[mid] < tar)
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid;
		}
		mid = (hi + lo) / 2;
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	int arr[n];
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	binary_search(arr, n, m);
	if (c == 1)
	{
		cout << "Found !!! Index: " << ind + 1 << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}
	return 0;
}
