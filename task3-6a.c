#include <stdio.h>

// グローバル変数
static int global_value = 10;

// グローバル関数
static void global_function()
{
    printf("グローバル関数a\n");
}

int main()
{
    global_function();
    printf("%d\n", global_value);
    return 0;
}