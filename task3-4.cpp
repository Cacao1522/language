#include <stdio.h>
int global_value = 1000;
void processB()
{
    int value = global_value;
    value++;
    // グローバル変数に戻す処理を書く
    global_value = value;
}
void processA()
{
    int i;
    // 引数相当をコピーする処理を書く
    i = global_value;
    printf("%d\n", i);
    processB();
    printf("%d\n", i);
    // グローバル変数に戻す処理を書く
    global_value = i;
}
int main()
{
    processA();
    // printf("%d\n", global_value);
    processB();
    // printf("%d\n", global_value);
    return 0;
}

// void processB(int i)
// {
//     i++;
// }
// void processA(int i)
// {
//     printf("%d\n", i);
//     processB(i);
//     printf("%d\n", i);
// }
// int main()
// {
//     int value = 1000;
//     processA(value);
//     processB(value);
//     return 0;
// }