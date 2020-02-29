#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> ls = {0,1,2,3,4,5,6,7,8,9};
    vector<double> vecd1(ls.cbegin(),ls.cend());
    vector<int> veci = {0,1,2,3,4};
    vector<double> vecd2(veci.cbegin(),veci.cend());
    for (auto d:vecd1)
    {
        cout << d << ' ';
    }
    cout << endl;
    for (auto d:vecd2)
    {
        cout << d << ' ';
    }
    cout << endl;
    return 0;
}
