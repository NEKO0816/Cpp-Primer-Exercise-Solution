#include<list>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{1,2,3,4,5,6};
    if (vec1 == vec2)
        cout << "They are equal" <<endl;
    else cout << "They are not equal" << endl;
    return 0;
}
