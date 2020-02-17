#include <iostream>
int main()
{
    std::cout << "Let's print the number from 10 downto 0" <<std::endl;
    for(int val = 10; val >= 0; --val)
    {
        std::cout << val;
        if (val != 0)
            std::cout << ' ';
        else std::cout << std::endl;
    }
    return 0;
}
