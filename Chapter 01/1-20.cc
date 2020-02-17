#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;
    std::cout << "Enter the book information: (ISBN, Numbers, Price)" << std::endl;
    std::cin >> book;
    std::cout << "The book information you have input is:" << std::endl;
    std::cout << book << std::endl;
    return 0;
}
