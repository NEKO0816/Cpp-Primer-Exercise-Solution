#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> veci;
	for (int i = 0; i != 10; ++i)
		veci.push_back(i);
	for (auto i : veci)
		cout << i << ' ';
	cout << endl;
	return 0;
}