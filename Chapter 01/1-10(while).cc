#include <iostream>
int main()
{
    int val = 10;
    std::cout << "Let's print the number from 10 downto 0" <<std::endl;
    while(val >= 0)
    {
        std::cout << val;
        if (val != 0)
            std::cout << ' ';
        else std::cout << std::endl;
        --val;
    }
    return 0;
}
