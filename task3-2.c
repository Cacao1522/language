#include <stdio.h>

int main(int argc, char const *argv[])
{
    int stack[5];
    stack[0] = atoi(argv[0]);
    int n = stack[0];
    int ret = 1;
CAL:
    if (n == 0)
    {
        goto END;
    }
    ret *= n;
    printf("%d\n", ret);
    n--;
    goto CAL;
END:
    printf("%d\n", ret);
    return 0;
}