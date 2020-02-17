#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book1,book2;
    std::cout << "Enter two book information: (ISBN, Numbers, Price)" << std::endl;
    std::cin >> book1 >> book2;
    if (book1.isbn() == book2.isbn())
    {
        std::cout << "Sum of the books is:" << std::endl;
        std::cout << book1 + book2 << std::endl;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN"
        <<std::endl;
    }
    return 0;
}
