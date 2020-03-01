#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> fls = {0,1,1,2,3,5,8,13,21,55,89};
    auto prev = fls.before_begin();
    auto curr = fls.begin();
    while(curr != fls.cend())
    {
        if(*curr % 2 == 1)
        {
            curr = fls.erase_after(prev);
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }
    for(auto i:fls)
        cout << i << ' ';
    cout << endl;
    return 0;

}
