#include <iostream>
using namespace std;

class node{
public:
    int value;
    node* next;
};

void printList(node* head)
{
    while(head!=NULL)
    {
        cout<<head->value<<endl;
        head=head->next;
    }
}

void insertAfter(node* previous , int newValue)
{
// 1.Check if previous node is not null
    if(previous->next==NULL)
    {
        cout<<"Previous can,t be NULL";
        return ;
    }

// 2.create a new node
    node* newnode=new node();
    newnode->value=newValue;

// 3.insert newnode after previous

    newnode->next=previous->next;
    previous->next=newnode;
}



int main()
{
   node* head= new node();
   node* second=new node();
   node* third=new node();

   head->value=1;
   head->next=second;

   second->value=2;
   second->next=third;

   third->value=3;
   third->next=NULL;
    
   insertAfter( second ,100);
   

   printList(head);

}