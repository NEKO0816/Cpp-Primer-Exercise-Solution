
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string ifile("in2");
    ifstream in(ifile);
    string str;
    vector<string> strs;
    while(in >> str)
    {
        strs.push_back(str);
    }
    in.close();
    for(auto s:strs)
        cout << s <<' ';
    cout << endl;
    return 0;
}

