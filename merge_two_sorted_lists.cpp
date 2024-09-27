#include "Node.h"

node *mergeLists(node *h1, node *h2)
{
    node *head = new node(0);
    node *temp = head;

    while (h1 && h2)
    {
        if (h1->value > h2->value)
        {
            temp->next = new node(h2->value);
            h2 = h2->next;
        }
        else
        {
            temp->next = new node(h1->value);
            h1 = h1->next;
        }
        temp = temp->next;
    }

    while(h1){
        temp->next = new node(h1->value);
        h1 = h1->next;
        temp = temp->next;
    }

    while(h2){
        temp->next = new node(h2->value);
        h2 = h2->next;
        temp = temp->next;
    }

    head = head->next;
    return head;
}

int main(){
    node *head;

    node *h1 = new node(5);
    h1->next = new node(10);
    h1->next->next = new node(15);
    h1->next->next->next = new node(20);
    h1->next->next->next->next = new node(25);

    node *h2 = new node(2);
    h2->next = new node(12);
    h2->next->next = new node(35);
    // h2->next->next->next = new node(20);
    // h2->next->next->next->next = new node(25);

    h1->display();
    h2->display();

    head = mergeLists(h1,h2);

    head->display();
}