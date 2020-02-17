#include <iostream>
int main()
{
    int val1 = 10, val2 = 20;
    int *pval = &val1;
    std::cout << pval << ' ' << val1 << ' ' << val2 <<std::endl;
    pval = &val2;
    std::cout << pval << ' ' << val1 << ' ' << val2 <<std::endl;
    *pval = 30;
    std::cout << pval << ' ' << val1 << ' ' << val2 <<std::endl;
    return 0;
}
