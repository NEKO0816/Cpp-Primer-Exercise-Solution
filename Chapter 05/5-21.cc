#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str, last_str;
	bool flag = false;
	cin >> last_str;
	while (cin >> str)
	{
		if (!str.empty() && str == last_str && isupper(str[0]))
		{
			flag = true;
			break;
		}
		else
		{
			last_str = str;
		}
	}

	if (flag)
	{
		cout << "We find " << str << " appears twice" << endl;
	}
	else
	{
		cout << "No repeated string." << endl;
	}
	return 0;
}