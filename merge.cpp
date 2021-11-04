#include <bits/stdc++.h>
using namespace std;
void merge_sort(int arr[], int left, int mid, int right)
{
	int i, j, left_side = mid - left + 1, right_side = right - mid, left_index, right_index;
	int L[left_side], R[right_side];
	for (i = 0; i < left_side; ++i)
	{
		L[i] = arr[left + i];
	}
	for (i = 0; i < right_side; ++i)
	{
		R[i] = arr[mid + 1 + i];
	}
	for (i = left, left_index = 0, right_index = 0; left_index < left_side && right_index < right_side; ++i)
	{
		if (L[left_index] < R[right_index])
		{
			arr[i] = L[left_index];
			left_index++;
		}
		else
		{
			arr[i] = R[right_index];
			right_index++;
		}
	}
	while (left_index < left_side)
	{
		arr[i] = L[left_index];
		left_index++;
		i++;
	}
	while (right_index < right_side)
	{
		arr[i] = R[right_index];
		right_index++;
		i++;
	}
	return ;
}

void merge(int arr[], int left, int right)
{
	if (left >= right)
	{
		return ;
	}
	int mid = left + (right - left) / 2;
	merge(arr, left, mid);
	merge(arr, mid + 1, right);
	merge_sort(arr, left, mid, right);
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
	merge(arr, 0, n - 1);
	for (i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
