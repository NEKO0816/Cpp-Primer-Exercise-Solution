#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool find_upper(const string& str)
{
	bool ret = false;
	for (auto ch : str)
	{
		if (isupper(ch))
		{
			ret = true;
			break;
		}
	}
	return ret;
}

void str_to_lower(string& str)
{
	for (auto& ch : str)
	{
		if (isupper(ch))
		{
			ch = tolower(ch);
		}
	}
}

int main()
{
	string s = "Hello,world";
	if (find_upper(s))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	
	str_to_lower(s);
	cout << s << endl;

	return 0;
}