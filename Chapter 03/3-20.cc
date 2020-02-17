#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

//sum of each pair of adjacent elements
//int main()
//{
//	vector<int> veci;
//	int temp;
//	while (cin >> temp)
//		veci.push_back(temp);
//	if (!veci.empty())
//	{
//		for (decltype(veci.size()) i = 0; i < veci.size() - 1; ++i)
//			cout << veci[i] + veci[i + 1] << ' ';
//		cout << endl;
//	}
//	return 0;
//}

//the first plus the last and so on
int main()
{
	vector<int> veci;
	int temp;
	while (cin >> temp)
		veci.push_back(temp);
	if (!veci.empty() && veci.size()>1)
	{
		for (decltype(veci.size()) i = 0; i < veci.size() / 2;++i)
		{
			cout << veci[i] + veci[veci.size() - 1 - i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
