#include <stdio.h>
#include <stdlib.h>
int v1, v2, v3;
void sum(void);
void sub(void);
void mul(void);
void divide(void);
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("ERR: enter %s v1 v2\n", argv[0]);
        return 1;
    }
    v1 = atoi(argv[1]);
    v2 = atoi(argv[2]);
    printf("v1=%d v2=%d\n", v1, v2);
    sum();
    printf("v1=%d v2=%d v3=%d\n", v1, v2, v3);
    sub();
    printf("v1=%d v2=%d v3=%d\n", v1, v2, v3);
    mul();
    printf("v1=%d v2=%d v3=%d\n", v1, v2, v3);
    divide();
    printf("v1=%d v2=%d v3=%d\n", v1, v2, v3);
    return 0;
}