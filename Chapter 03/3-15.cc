#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> vecstr;
	string str;
	while (cin >> str)
		vecstr.push_back(str);
	for (auto str : vecstr)
		cout << str << ' ';
	cout << endl;
	return 0;
}