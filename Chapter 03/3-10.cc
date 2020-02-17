#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1;
	for (auto c : str1)
		if(!ispunct(c))
			str2 += c;
	cout << str2 << endl;
	return 0;
}