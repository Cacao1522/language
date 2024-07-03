#include "stack.hpp"
#include <stdio.h>
int main()
{
    Stack s;
    printf("要素の個数：%d\n", s.count());
    s.push(1);
    s.push(2);
    s.push(3);
    printf("要素の個数：%d\n", s.count());
    printf("取り出した値：%d\n", s.pop());
    printf("要素の個数：%d\n", s.count());
    printf("取り出した値：%d\n", s.pop());
    printf("取り出した値：%d\n", s.pop());
}