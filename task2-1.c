#include <stdio.h>

int main()
{
    FILE *fp;
    if ((fp = fopen("task2-1.txt", "w")) != NULL)
    {
        for (int i = 1; i <= 30; i++)
        {
            if (i % 3 != 0 && i % 5 != 0)
            {
                fprintf(fp, "%d", i);
                goto END;
            }
            if (i % 3 == 0)
            {
                fprintf(fp, "Fizz");
            }
            if (i % 5 == 0)
            {
                fprintf(fp, "Buzz");
            }
        END:
            fprintf(fp, ", ");
        }
    }
    return 0;
}