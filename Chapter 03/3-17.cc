#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
	vector<string> vecstr;
	string str;
	while (cin >> str)
	{
		for (auto& c : str)
			if (islower(c))
				c = toupper(c);
		vecstr.push_back(str);
	}
	if (!vecstr.empty())
	{
		for (auto str : vecstr)
		{
			cout << str << endl;
		}
	}
	return 0;
}