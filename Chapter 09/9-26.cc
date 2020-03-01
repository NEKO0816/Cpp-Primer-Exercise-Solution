#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> v;
    list<int> l;
    auto ia_beg = begin(ia);
    auto ia_end = end(ia);
    v.assign(ia_beg,ia_end);
    l.assign(ia_beg,ia_end);
    auto v_iter = v.begin();
    while(v_iter != v.cend())
    {
        if(*v_iter % 2 == 0)
            v_iter = v.erase(v_iter);
        else
            ++v_iter;
    }
    auto l_iter = l.begin();
    while(l_iter != l.end())
    {
        if(*l_iter % 2 == 1)
            l_iter = l.erase(l_iter);
        else
            ++l_iter;
    }
    for(auto i:v)
    {
        cout << i << ' ';
    }
    cout << endl;
    for(auto i:l)
    {
        cout << i << ' ';
    }
    cout << endl;
    

}
