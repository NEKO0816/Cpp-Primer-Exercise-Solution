#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.at(0) <<endl; //throw exception:out of range
    cout << *v.begin() << endl; // segmentation fault
    cout << v[0] <<endl; // segmentation fault
    cout << v.front() << endl; // segmentation fault
    return 0;
}
