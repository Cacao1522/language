#include <stdio.h>
int i = 1000;
int main()
{
    int i = 100;
    for (int i = 0; i < 100; i++) // for文の中に変数が宣言できる（for文の間だけのスコープ）
    {
        {
            int i = 10;
            printf("%d\n", i); // さて何が表示される？
        }
    }
    printf("%d\n", i);
    return 0;
}