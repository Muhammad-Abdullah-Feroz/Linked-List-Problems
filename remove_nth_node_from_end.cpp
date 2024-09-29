#include "Node.h"

node *removeFromEnd(node *head, int n)
{
    node *nodePtr = nullptr;
    node *temp = head;
    bool exist = true;
    for (int i = 0; i < n; i++)
    {
        if (!temp)
        {
            exist = false;
            break;
        }
        temp = temp->next;
    }
    if (exist)
    {
        nodePtr = head;
        node *prev = nullptr;
        while (temp)
        {
            temp = temp->next;
            prev = nodePtr;
            nodePtr = nodePtr->next;
        }
        if (nodePtr)
        {
            if (nodePtr == head)
            {
                head = nodePtr->next;
            }
            else
            {
                prev->next = nodePtr->next;
            }
            delete nodePtr;
        }
    }
    return head;
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(6);
    head->next->next->next->next->next->next = new node(7);
    head->next->next->next->next->next->next->next = new node(8);
    head->next->next->next->next->next->next->next->next = new node(9);

    head->display();

    head = removeFromEnd(head, 0);

    head->display();
}