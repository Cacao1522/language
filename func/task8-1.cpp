#include <iostream>
#include <functional>
std::function<void()> f(int n)
{
    return [n]()
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "A";
        }
        std::cout << std::endl;
    };
}
int main()
{
    auto sum = [](int x, int y)
    {
        return x + y;
    };
    std::cout << sum(2, 3) << std::endl;

    auto f2 = f(3);
    f2();
    return 0;
}