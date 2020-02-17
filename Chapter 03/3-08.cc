#include <iostream>
#include <string>
using namespace std;

//while-loop 3-06
//int main()
//{
//	string str("hello");
//	decltype(str.size()) iter = 0;
//	while (iter < str.size())
//	{
//		str[iter] = 'X';
//		++iter;
//	}
//	cout << str << endl;
//	return 0;
//}

//traditional for-loop 3-06
int main()
{
	string str("hello");
	for (decltype(str.size()) i = 0; i < str.size(); ++i)
		str[i] = 'X';
	cout << str << endl;
	return 0;
}