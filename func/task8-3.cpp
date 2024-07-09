#include <iostream>
#include <functional>

double rec_f(int n, std::function<double(double)> f)
{
    double x = 1.0; // 初期値
    for (int i = 0; i < n; i++)
    {
        x = f(x);
    }
    return x;
}

double func_double(double n)
{
    return n * 2;
}

int main()
{
    int n = 3;
    double result = rec_f(n, func_double);
    std::cout << result << std::endl;

    return 0;
}