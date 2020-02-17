//A little bit different from the exercise
//I make a mistake that I think the exercise requires unordered data.
//So this program accepts unordered data and sorts the data and outputs them with the same ISBN and counts the book kind number.

#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book,books[100];
    std::cout << "Enter a series of book information: (ISBN, Numbers, Price)" << std::endl;
    // input the books.
    int counter = -1;
    while(std::cin >> book)
        books[++counter] = book;
    
    int kind_num = 0;
    //sort the books, the same isbn in same place.
    int i = 0;
    while(i <=counter)
    {
        int same_book_record = 0;
        for (int j = i+1; j<=counter; ++j)
        {
            if(books[i].isbn() == books[j].isbn())
            {
                same_book_record++;
                Sales_item temp = books[i+same_book_record];
                books[i+same_book_record] = books[j];
                books[j] = temp;
            }
        }
        same_book_record += 1;
        i += same_book_record;
        ++kind_num;
    }
    std::cout << "The Records you have inputed: " << std::endl;
    for(int i = 0; i<=counter; ++i)
        std::cout << books[i] <<std::endl;
    std::cout << "The kind number of books is: " << kind_num
        <<std::endl;
    return 0;
}
