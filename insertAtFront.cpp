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

void insertATFront(node** head, int newValue)
{
    //1.prepare a node
    node* newNode=new node();
    newNode->value=newValue;

    //2.put it in front of current head
     newNode->next=*head;
    //3.move head point to newNode
    *head=newNode;
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

   insertATFront(&head,10);

   printList(head);

}