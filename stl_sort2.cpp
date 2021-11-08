#include <bits/stdc++.h>
using namespace std;

class point
{
public:
	int x;
	int y;

};

bool operator<(point a, point b)
{
	if (a.x < b.x)
		return 0;
	if (a.x > b.x)
		return 1;
	if (a.y > b.y)
		return 1;
	return 0;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	point arr[n];
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i].x >> arr[i].y;
	}
	sort(arr, arr + n);
	for ( i = 0; i < n; ++i)
	{
		cout << arr[i].x << " " << arr[i].y << endl;
		/* code */
	}
	cout << endl;
	return 0;
}
