#include <iostream>
#include <list>
using namespace std;
int main()
{
    string str;
    list<string> lstrs;
    while (cin >> str)
    {
        lstrs.push_back(str);
    }
    for (auto iter = lstrs.cbegin(); iter != lstrs.cend(); ++iter)
        cout << *iter << ' ';
    cout << endl;
    return 0;
}
