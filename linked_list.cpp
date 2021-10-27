#include <bits/stdc++.h>
using namespace std;

class linked_list
{
public:
	int value;
	linked_list *next;
};

bool check_list(linked_list list[], int n)
{
	linked_list *fast, *slow;
	fast = &list[0];
	slow = &list[0];
	while (fast->next != 0 && slow->next != 0)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			cout << "Yes!!! there is a cycle. The common point is: " << fast->value << endl;
			return true;
		}
	}
	cout << "There is no cycle" << endl;
	return false;
}

void remove(linked_list list[], int n)
{
	int i, j, k, m;
	linked_list *head, *fast, *slow;
	fast = &list[0];
	slow = &list[0];
	while (fast->next != 0 && slow->next != 0)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			break;
		}
	}
	head = &list[0];
	while (head->next != slow->next)
	{
		head = head->next;
		slow = slow->next;
	}
	cout << "The starting of the loop: " << head->next->value << endl;
	slow->next = 0;
	return ;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	linked_list list[n];
	for (i = 0; i < n; ++i)
	{
		list[i].value = i + 1;
		list[i].next = 0;
		if (i != 0)
		{
			list[i - 1].next = &list[i];
		}
	}
	list[n - 1].next = &list[m - 1];
	if (check_list(list, n))
	{
		remove(list, n);
		check_list(list, n);
	}
	return 0;
}
