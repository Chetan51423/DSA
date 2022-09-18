#include <iostream>

using namespace std;

class node{
public:
    int value;
    node* next;
};

void printList( node* h)
{
    while(h!=NULL)
    {
        cout<<h->value<<endl;
        h=h->next;
    }
}



int main()
{
    node* head=new node();
    node* second=new node();
    node* third=new node();
    node* fourth=new node();
    
    node* front=new node();
    node* mid=new node();
    node* end=new node();
    
    head->value=1;
    head->next=second;
    
    second->value=2;
    second->next=third;
    
    third->value=3;
    third->next=fourth;
    
    fourth->value=4;
    fourth->next= NULL;
    
    front->value=5;
    front->next=head;
    
    mid->value=7;
    second->next=mid;
    mid->next=third;
    
    end->value=6;
    fourth->next=end;
    end->next=NULL;
    
    printList(front);
    
    
    
}