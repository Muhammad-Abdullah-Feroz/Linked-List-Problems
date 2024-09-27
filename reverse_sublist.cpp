#include "Node.h"

node * reverseSublist(node* head , int n , int m){
    int count = 0;
    if(n>m || n < 0)
        return head;
    
    // Disconnecting the Sublist
    node * temp = head;
    node * start;
    node * end = nullptr;
    bool exist = false;

    if(n == 0){
        start == nullptr;
    }
    while(temp){
        count++;
        if (count == n-1){
            start = temp;
        }
        if (count == m){
            end = temp->next;
            temp->next = nullptr;
            exist = true;
            break;
        }
        temp = temp->next;
    }

    if(! exist)
        return head;
    // Sublist is disconnected at this point

    // Now the sublist will be reversed as a normal linked list
    node * prev = NULL;
    node * curr;
    
    if(n == 0)
        curr = head;
    else
        curr = start->next;
    
    node * next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }   
    // At this point the sublist is reversed

    if(n==0){
        head->next = end;
        head = prev;
    }else{
        start->next->next = end;
        start->next = prev; 
    }
    // prev->next = end;

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

    head = reverseSublist(head , 0,6);

    head->display();
}