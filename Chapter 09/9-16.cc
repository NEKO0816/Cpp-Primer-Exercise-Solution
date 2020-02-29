#include<list>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<int> vec1{1,2,3,4,5};
    list<int> ls{1,2,3,4,5};
    vector<int> vec2(ls.cbegin(),ls.cend());
    if (vec1 == vec2)
        cout << "They are equal" <<endl;
    else cout << "They are not equal" << endl;
    return 0;
}
