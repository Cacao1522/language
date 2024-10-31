#include <stdio.h>
extern int v1, v2, v3;
extern char v4;
extern int *v5;
void assign1(void);
void printBinary(int num)
{
    // int型は通常32ビットなので、上位から下位に向かってビットを確認
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}
int main(void)
{
    assign1();
    printf("int v1(10)=%d addr=%p size=%d int v2(16)=%x addr=%p size=%d\n", v1, &v1, (int)sizeof(v1), v2, &v2, (int)sizeof(v2));
    printf("int v3(2)=");
    printBinary(v3);
    printf(" addr=%p size=%d \nchar v4=%c addr=%p size=%d\n", &v3, (int)sizeof(v3), v4, &v4, (int)sizeof(v4));
    printf("int *v5=%d addr=%p size=%d\n", *v5, &v5, (int)sizeof(v5));
    return (0);
}