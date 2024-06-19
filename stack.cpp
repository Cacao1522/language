#include <stdio.h>
class Stack
{
private:
    int array[50];
    int pos;

public:
    Stack()
    {
        pos = 0;
    }
    void push(int x)
    {
        array[pos] = x;
        pos++;
    }
    int pop()
    {
        pos--;
        return array[pos];
    }
    int count()
    {
        return pos;
    }
};