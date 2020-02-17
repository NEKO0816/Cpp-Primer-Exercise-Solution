#include <iostream>
int main()
{
    std::cout << "Enter a series of numbers:" << std::endl;
    std::cout << "If you're using Windows Ctrl+Z to end" << std::endl;
    std::cout << "If you're using Mac OS X Ctrl+D to end" << std::endl;
    int val = 0, sum = 0;
    while(std::cin >> val)
        sum += val;
    std::cout << "The sum of the numbers is " << sum << std::endl;
    return 0;
}
