#include <bits/stdc++.h>
using namespace std;
void count(int arr[], int n)
{
	int max = *max_element(arr, arr + n);
	int min = *min_element(arr, arr + n);
	int i, j, k, m;
	int output_arr[n];
	std::vector<int> count_arr(max - min + 1);
	for (i = 0; i < n; ++i)
	{
		count_arr[arr[i] - min]++;
	}
	for ( i = count_arr.size() - 1; i >= 1; --i)
	{
		count_arr[i - 1] += count_arr[i ];
	}
	for (i = 0; i < n; ++i)
	{
		output_arr[count_arr[arr[i] - min] - 1] = arr[i];
		count_arr[arr[i] - min]--;
	}
	for (i = 0; i < n; ++i)
	{
		arr[i] = output_arr[i];
	}
	return ;
}


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	count(arr, n);
	for ( i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
		/* code */
	}
	cout << endl;
	return 0;
}
