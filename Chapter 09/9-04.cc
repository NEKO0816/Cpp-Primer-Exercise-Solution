#include<iostream>
#include<vector>

bool find_val(std::vector<int>::iterator beg, std::vector<int>::iterator end, int i){
    while(beg != end)
    {
        if(*beg == i)
        {
            return true;
        }
        ++beg;
    }
    return false;
}

int main()
{
    std::vector<int> v1{0,1,2,3,4,5,6,7,8,9};
    bool flag = find_val(v1.begin(),v1.end(),10);
    if(flag)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return 0;
}
