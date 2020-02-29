#include<list>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    list<const char *> ls= {"C++", "is", "the", "best", "language"};
    vector<string> vecs(10,"good");
    vecs.assign(ls.cbegin(),ls.cend());
    for(auto const &s:vecs)
    {
        cout << s << ' ';
    }
    cout << endl;
    return 0;
}
