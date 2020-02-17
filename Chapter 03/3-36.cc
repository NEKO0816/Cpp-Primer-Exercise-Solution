#include <iostream>
#include <vector>
using namespace std;
//compare two arrays whether equal or not.
//int main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int b[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int flag = 1;
//	if (size(a) != size(b))
//		cout << "They are not equal." << endl;
//	else
//	{
//		for (int i = 0; i != size(a); ++i)
//		{
//			if (a[i] != b[i])
//			{
//				flag = 0;
//				cout << "They are not equal." << endl;
//				break;
//			}
//		}
//		if (flag)
//			cout << "They are eaqual!" << endl;
//	}
//
//	return 0;
//}

//compare two vectors whether equal or not.

int main()
{
	vector<int> a = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> b = { 0,1,2,3,4,5,6,7,8,9 };
	int flag = 1;
	if (a.size() != b.size())
		cout << "They are not equal." << endl;
	else
	{
		for (int i = 0; i != a.size(); ++i)
		{
			if (a[i] != b[i])
			{
				flag = 0;
				cout << "They are not equal." << endl;
				break;
			}
		}
		cout << "They are equal!" << endl;
	}
	return 0;
}