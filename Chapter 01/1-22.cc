#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book,sum;
    std::cout << "Enter a series of book information: (ISBN, Numbers, Price)" << std::endl;
    std::cin >> book;
    sum = book;
    while(std::cin >> book)
    {
        if (sum.isbn() == book.isbn())
            sum = sum + book;
        else
        {
            std::cerr << "Data must refer to same ISBN"
            <<std::endl;
            exit(0);
        }
    }
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
