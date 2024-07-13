#include <iostream>
#include <vector>
#include <algorithm>

bool is_even(int &n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> v1 = {1, 3, 6, 10};
    auto result = std::find_if(v1.begin(), v1.end(), [](int x)
                               { return x % 2 == 0; });
    if (result == v1.end())
    {
        std::cout << "存在しない" << std::endl;
    }
    else
    {
        std::cout << "発見：" << *result << std::endl;
    }

    std::vector<int> v2 = {1, 3, 5, 7};
    result = std::find_if(v2.begin(), v2.end(), is_even);
    if (result == v2.end())
    {
        std::cout << "存在しない" << std::endl;
    }
    else
    {
        std::cout << "発見：" << *result << std::endl;
    }
    return 0;
}
