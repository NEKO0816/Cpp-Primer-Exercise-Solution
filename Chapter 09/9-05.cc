#include<iostream>
#include<vector>
#include<cstdlib>
std::vector<int>::iterator find_val(std::vector<int>::iterator beg, std::vector<int>::iterator end, int i){
    while(beg != end)
    {
        if(*beg == i)
        {
            return beg;
        }
        ++beg;
    }
    return end;
}

int main()
{
    std::vector<int> v1{0,1,2,3,4,5,6,7,8,9};
    std::vector<int>::iterator it = find_val(v1.begin(),v1.end(),9);
    if(it != v1.end())
        std::cout << *it << std::endl;
    else
        std::cout << "false" << std::endl;
    return 0;
}
