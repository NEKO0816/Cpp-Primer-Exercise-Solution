#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void insert_str(forward_list<string> &ls, const string &s1, const string &s2)
{
    auto curr = ls.begin();
    auto prev = ls.before_begin();
    bool flag = false;
    while(curr != ls.cend())
    {
        if(*curr == s1)
        {
            curr = ls.insert_after(curr,s2);
            flag = true;
        }
        prev = curr;
        ++curr;
    }
    if(!flag)
    {
        ls.insert_after(prev, s2);
    }
}

int main()
{
    forward_list<string> ls = {"Hello", "Ho", "Hello", "hapi"};
    string s1 = "Hell";
    string s2 = "insert";
    insert_str(ls,s1,s2);
    for(auto s:ls)
        cout << s << ' ';
    cout << endl;
    return 0;
}
