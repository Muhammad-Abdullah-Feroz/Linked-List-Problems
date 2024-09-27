#include "Node.h"

node *reverseList(node *head)
{
    node *curr = head;
    node *prev = nullptr;
    node *next = head->next;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void display(node * head){
    node * temp = head;
    while(temp->next){
        cout<<temp->value<<" -> ";
        temp = temp->next;
    }
    cout<<temp->value<<endl;
}

int main(){
    node* head = new node(5);
    head->next = new node(10);
    head->next->next = new node(15);
    head->next->next->next = new node(20);
    head->next->next->next->next = new node(25);

    display(head);

    head = reverseList(head);

    display(head);

}