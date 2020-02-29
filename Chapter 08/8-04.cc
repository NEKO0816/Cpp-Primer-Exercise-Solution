#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string ifile("in1");
    ifstream in(ifile);
    string str;
    vector<string> strs;
    while(getline(in,str))
    {
        strs.push_back(str);
    }
    in.close();
    for(auto s:strs)
        cout << s <<endl;
    return 0;
}

