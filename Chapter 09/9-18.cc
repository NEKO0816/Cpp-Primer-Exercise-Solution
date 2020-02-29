#include <iostream>
#include <deque>
using namespace std;
int main()
{
    string str;
    deque<string> dstrs;
    while (cin >> str)
    {
        dstrs.push_back(str);
    }
    for (auto iter = dstrs.cbegin(); iter != dstrs.cend(); ++iter)
        cout << *iter << ' ';
    cout << endl;
    return 0;
}
