#include <iostream>
#include <vector>
#include <algorithm>
void func_double(int &n)
{
    n *= 2;
}

bool is_even(int &n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4};

    std::for_each(v1.begin(), v1.end(), [](int &n)
                  { n *= 2; });

    for (const int &n : v1)
    {
        std::cout << n;
    }
    std::cout << std::endl;

    std::vector<int> v2 = {0, 2, 4, 6};

    std::for_each(v2.begin(), v2.end(), func_double);

    for (const int &n : v2)
    {
        std::cout << n;
    }
    std::cout << std::endl;

    std::vector<int> v3 = {1, 3, 6, 10};
    auto result = std::find_if(v3.begin(), v3.end(), [](int x)
                               { return x % 2 == 0; });
    if (result == v3.end())
    {
        std::cout << "存在しない" << std::endl;
    }
    else
    {
        std::cout << "発見：" << *result << std::endl;
    }

    std::vector<int> v4 = {1, 3, 5, 7};
    result = std::find_if(v4.begin(), v4.end(), is_even);
    if (result == v4.end())
    {
        std::cout << "存在しない" << std::endl;
    }
    else
    {
        std::cout << "発見：" << *result << std::endl;
    }
    return 0;
}
