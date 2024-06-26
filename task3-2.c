#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int stack[20];
    int stackPoint = 0;
    scanf("%d", &n);
    int ret = 1;
    goto CHE;
CHE:
    if (n < 0)
        goto ERR;
    if (n == 0)
        goto END;
    goto LOAD;
LOAD:
    stack[stackPoint++] = n;
    n--;
    if (n > 0)
        goto LOAD;
    goto CAL;
CAL:
    ret *= stack[--stackPoint];
    if (stackPoint - 1 < 0)
        goto END;
    goto CAL;
END:
    printf("%d\n", ret);
    return 0;
ERR:
    printf("error\n");
    return -1;
}