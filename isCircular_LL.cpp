#include<iostream>
using namespace std;
struct node{
	int key;
	node * next;
};

bool isCircular_LL(struct node* head)
 {
   if(head==NULL)
   	 return true;
    node * temp=head->next;
    while(temp!=NULL && temp!=head)
   	  temp=temp->next;
     if(temp==head)
       return true;
   
 }

node* NewNode(int key)
 {
   node* head=new node;
   head->key=key;
   head->next=NULL;
   return head;
 }
int main()
 {
 	node* head=NewNode(1);
 	head->next=NewNode(2);
 	head->next->next=NewNode(3);
 	head->next->next->next=NewNode(4);
    node* temp=head;
    while(temp!=NULL)
    {
    	cout<<temp->key<<endl;
    	temp=temp->next;
    }
    if(isCircular_LL(head))
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;

    //make the LL CIRCULAR
    head->next->next->next->next=head;
    if(isCircular_LL(head))
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl
;

   return 0;
 }