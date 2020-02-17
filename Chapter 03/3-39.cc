#include <iostream>
#include <string>
using namespace std;
//use string type
//int main()
//{
//	string s1 = "bcde";
//	string s2 = "bcde";
//	if (s1 > s2)
//		cout << "s1 is bigger than s2." << endl;
//	else if (s1 == s2)
//		cout << "they are equal." << endl;
//	else cout << "s1 is less than s2." << endl;
//	return 0;
//}

//use c type string.
int main()
{
	const char s1[] = "bcde";
	const char s2[] = "bcde";
	if (strcmp(s1,s2) > 0)
		cout << "s1 is bigger than s2." << endl;
	else if (strcmp(s1,s2) == 0)
		cout << "they are equal." << endl;
	else cout << "s1 is less than s2." << endl;
	return 0;
}