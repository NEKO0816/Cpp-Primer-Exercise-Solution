#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2;
	cout << "Please Enter two strings." << endl;
	cin >> str1 >> str2;
	do
	{
		cout << "The shorter one is " << ((str1.size() < str2.size()) ? str1 : str2) << endl;
		cout << "Please Enter two strings." << endl;
	} while (cin >> str1 >> str2);
	return 0;
}