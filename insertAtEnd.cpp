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

void insertATEnd(node** head, int newValue)
{
    //we have to follow 4 steps to insert an element at the end;

    //1. create a note
    node* newnode=new node();
    newnode->value=newValue; 
    newnode->next=NULL;

    //2.find if the link-list is empty, new node will be a head node.
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }

    //3.find the last node 
    node* last=*head;
    while(last->next!=NULL)
    {
        last=last->next;
    }

    //insert the last node at the end.
    last->next=newnode;
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
    
   insertATEnd(&head, 50);
   

   printList(head);

}