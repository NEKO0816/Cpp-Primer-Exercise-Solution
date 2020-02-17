#include <iostream>
#include <string>
using namespace std;

//// output larger string.
//int main()
//{
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	if (str1 == str2)
//		cout << "These strings are equal. " << endl;
//	else if (str1 >str2)
//		cout << str1 << endl;
//	else
//		cout << str2 << endl;
//	return 0;
//}

// output longer string.
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	if (str1.size() == str2.size())
		cout << "These strings have same length. " << endl;
	else if (str1.size() > str2.size())
		cout << str1 << endl;
	else 
		cout << str2 << endl;
	return 0;
}