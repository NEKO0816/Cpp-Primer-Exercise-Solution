#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> iv{12,5,3,5,32,5,5,3,5,11,44,4,22};
    vector<int>::iterator iter = iv.begin(),
    mid = iv.begin() + iv.size() / 2;
    int some_val = 5;
    while (iter != mid)
    {
        if(*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val); // old iterator shold be refreshed.
            ++iter; // this step iter is point to old element position.
            mid = iv.begin() + iv.size() / 2;
        }
        ++iter;// because of ++iter in if block, no matter if is true or not, iter will point to next element.
    }
    for(auto const &val :iv)
        cout << val << ' ';
    cout << endl;
    return 0;
}
