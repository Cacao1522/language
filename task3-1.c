#include <stdio.h>

struct HeavyData
{
    double data[10000];
    double index[10000];
};
void value(struct HeavyData data, int n)
{
    if (n > 0)
        value(data, n - 1);
    else
        return;
}
void pointer(struct HeavyData *data, int n)
{
    if (n > 0)
        pointer(data, n - 1);
    else
        return;
}

int main()
{
    struct HeavyData data;
    value(data, 10);
    // pointer(&data, 50);
    char c = getchar();
    return 0;
}