#include <iostream>
using namespace std;

inline bool isShoter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

int main()
{
	string s1 = "ABCD",s2 ="ABC";
	if (isShoter(s1, s2))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	return 0;
}