#include "Node.h"

// Removes dublicate elements from a sorted list
node* removeDuplicates(node * head){
    node* temp = head;

    while(temp->next){
        if(temp->value == temp->next->value){
            node * next = temp->next;
            temp->next = next->next;
            delete next;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    node *head = new node(2);
    head->next = new node(5);
    head->next->next = new node(5);
    head->next->next->next = new node(11);
    head->next->next->next->next = new node(11);

    head->display();

    head = removeDuplicates(head);

    head->display();
}