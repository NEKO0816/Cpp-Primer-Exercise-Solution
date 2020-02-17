#include <iostream>
int main()
{
    std::cout << "Enter two numbers:";
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    if (v1 > v2)
    {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    for (; v1 <= v2; ++v1)
    {
        std::cout << v1;
        if (v1 != v2)
            std::cout << ' ';
        else
            std::cout << std::endl;
    }
    return 0;
}
