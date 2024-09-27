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

int main()
{
    node *head = new node(5);
    head->next = new node(10);
    head->next->next = new node(15);
    head->next->next->next = new node(20);
    head->next->next->next->next = new node(25);

    head->display();

    head = reverseList(head);

    head->display();
}