#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5} ;
    cout << v.size() << ' ' << v.capacity() << endl;
    v.push_back(6);
    cout << v.size() << ' ' << v.capacity() << endl;
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    cout << v.size() << ' ' << v.capacity() << endl;
    return 0;
}
