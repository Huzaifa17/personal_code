#include<bits/stdc++.h>
using namespace std;


class lst
{
public:
  int val;
  lst *next;
};

class linked_lst
{
public:
  //here
  lst *head;
  linked_lst()
  {
    head=0;
  }
  // members functions
  void create_list(int val);
  void reverse_lst();
  void show()
  {
    lst *curr=head;
    while(curr!=0)
    {
      cout<<curr->val<<" ";
      curr=curr->next;
    }
    cout<<endl;
    return ;
  }
};

void linked_lst::create_list(int val)
{
  lst *new_node=new lst;
  new_node->val=val;
  new_node->next=0;
  if(head==0)
  {
    head=new_node;
    return ;
  }
  lst *curr=head;
  while(curr->next!=0)
  {
    curr=curr->next;
  }
  curr->next=new_node;
}


void linked_lst::reverse_lst()
{
  lst *p1=head;
  if(head==0||p1->next==0)
  {
    return;
  } 
  //
  lst *p2=p1->next;
  lst *p3=p2->next;
  p1->next=0;
  p2->next=p1;
  if(p3==0)
  {
    head=p2;
    return ;
  }
  while(p3->next!=0)
  {
    p1=p2;
    p2=p3;
    p3=p3->next;
    p2->next=p1;
  }
  p3->next=p2;
  head=p3;
  return ;
}

int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,i,j,k,m,t;
  cin>>n;
  linked_lst obj;
  for(i=0;i<n;++i)
  {
    cin>>k;
    obj.create_list(k);
  }
  obj.show();
  obj.reverse_lst();
  obj.show();
  return 0;
}
