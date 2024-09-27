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

