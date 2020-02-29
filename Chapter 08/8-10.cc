
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string ifile("in3");
    ifstream in(ifile);
    string line;
    getline(in,line);
    istringstream record(line);
    string str;
    vector<string> strs;
    while (record >> str)
        strs.push_back(str);
    for(auto s:strs)
        cout << s <<' ';
    cout << endl;
    return 0;
}

