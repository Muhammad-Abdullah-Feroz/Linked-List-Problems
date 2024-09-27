#include <iostream>
#include <conio.h>

using namespace std;

class node
{
public:
    int value;
    node *next;

    node(int val)
    {
        value = val;
        next = nullptr;
    }
};


int findMiddle(node* head){
if(head){
    node* slowPointer = head;
    node* fastPointer = head;

    while(fastPointer && fastPointer->next){
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
    }
    
    return slowPointer->value;
}
else
    return NULL;
}

int main(){
    node* head = new node(5);
    cout<<endl<<"Middle Value : "<<findMiddle(head);
    head->next = new node(10);
    cout<<endl<<"Middle Value : "<<findMiddle(head);
    head->next->next = new node(20);
    cout<<endl<<"Middle Value : "<<findMiddle(head);
    head->next->next->next = new node(40);
    cout<<endl<<"Middle Value : "<<findMiddle(head);
    head->next->next->next->next = new node(80);
    cout<<endl<<"Middle Value : "<<findMiddle(head);

    return 0;
}