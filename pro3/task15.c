#include "task15.h"
#include <math.h>
#include <stdio.h>
void math_function1(FILE *fp)
{
    double x;
    double y;
    if ((fp = fopen("34714037-1.dat", "w")) == NULL)
    {
        printf("\aそのファイルをオープンできません。");
    }
    else
    {
        for (double i = -500; i <= 500; i++)
        {
            x = 8 * M_PI * i / 500;
            y = fabs(sin(x) / x);
            fprintf(fp, "%lf, %lf\n", x, y);
        }
    }
}

void math_function2(FILE *fp)
{
    double x;
    double y;
    if ((fp = fopen("34714037-2.dat", "w")) == NULL)
    {
        printf("\aそのファイルをオープンできません。");
    }
    else
    {
        for (double i = -500; i <= 500; i++)
        {
            if (i == 0)
                continue;
            x = 8 * M_PI * i / 500;
            y = fabs(1 / x);
            fprintf(fp, "%lf, %lf\n", x, y);
        }
    }
}