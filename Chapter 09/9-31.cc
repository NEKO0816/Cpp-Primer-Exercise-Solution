#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> ls = {0,1,2,3,4,5,6,7,8,9};
    auto prev = ls.before_begin();
    auto curr = ls.begin();
    while(curr != ls.cend())
    {
        if(*curr % 2 == 0)
        {
            curr = ls.erase_after(prev);
        }
        else
        {
            curr = ls.insert_after(curr,*curr);
            prev = curr;
            ++curr;
        }
    }
    for (auto i:ls)
        cout << i << ' ';
    cout << endl;
    return 0;
}
