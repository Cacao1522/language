#include "stack.hpp"
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    printf("%d¥n", s.pop());
    printf("%d¥n", s.pop());
    printf("%d¥n", s.pop());
}