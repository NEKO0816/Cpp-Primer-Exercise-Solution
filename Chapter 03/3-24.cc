#include <iostream>
#include <vector>
#include <string>
using namespace std;

//sum of each pair of adjatance elements
//int main()
//{
//	vector<int> vi;
//	int temp;
//	while (cin >> temp)
//		vi.push_back(temp);
//	if (!vi.empty() && vi.size() > 1)
//		for (auto iter = vi.begin();iter != vi.end() - 1;++iter)
//			cout << *iter + *(iter + 1) << ' ';
//	cout << endl;
//	return 0;
//}

//sum of the first element and the last element ... and so on

int main()
{
	vector<int> vi;
	int temp;
	while (cin >> temp)
		vi.push_back(temp);
	if (!vi.empty() && vi.size() > 1)
		for (auto iter1 = vi.begin(), iter2 = vi.end() - 1;iter1 < iter2;++iter1, --iter2)
			cout << *iter1 + *iter2 << ' ';
	cout << endl;
	return 0;
}