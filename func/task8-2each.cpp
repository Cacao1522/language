#include <iostream>
#include <vector>
#include <algorithm>
void func_double(int &n)
{
    n *= 2;
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

    return 0;
}
