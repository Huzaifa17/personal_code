#include<bits/stdc++.h>
using namespace std;

class binary_tree
{
public:
	int value;
	binary_tree *left;
	binary_tree *right;
	//binary_tree();
	//~binary_tree();
};

binary_tree *create_node(int item)
{
	binary_tree *new_node=new binary_tree;
	if(new_node==0)
	{
		cout<<"Allocation error!!!"<<endl;
		return 0;
	}
	new_node->left=0;
	new_node->right=0;
	new_node->value=item;
	return new_node;
}

void left_assign(binary_tree *root,binary_tree *child)
{
	root->left=child;
}

void right_assign(binary_tree *root,binary_tree *child)
{
	root->right=child;
}

binary_tree *create_tree()
{
	binary_tree *root=create_node(2);
	binary_tree *seven=create_node(7);
	binary_tree *nine=create_node(9);
	root->left=seven;
	root->right=nine;
	binary_tree *one=create_node(1);
	binary_tree *six=create_node(6);
	binary_tree *eight=create_node(8);
	seven->left=one;
	seven->right=six;
	nine->right=eight;
	binary_tree *five=create_node(5);
	binary_tree *ten=create_node(10);
	binary_tree *three=create_node(3);
	binary_tree *four=create_node(4);
	six->right=ten;
	six->left=five;
	eight->left=three;
	eight->right=four;
	return root;
}

void preorder(binary_tree *root)
{
	cout<<root->value<<" ";
	if(root->left!=0)
	{
		preorder(root->left);
	}
	if(root->right!=0)
	{
		preorder(root->right);
	}
}

int main()
{
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	binary_tree *root=create_tree();
	preorder(root);
	return 0;
}
