#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<int> v;
	for (int i = 5; i != 15; ++i)
		v.push_back(i * 3);
	cout << "before change: " << endl;
	for (auto i : v)
		cout << i << ' ';
	cout << endl;
	
	for (auto iter = v.begin();iter != v.end();++iter)
		*iter = *iter * 2;

	cout << "after change: " << endl;
	for (auto i : v)
		cout << i << ' ';
	cout << endl;
	return 0;
}