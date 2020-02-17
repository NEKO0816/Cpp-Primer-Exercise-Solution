#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> veci;
	int i;
	while (cin >> i)
		veci.push_back(i);
	for (auto i : veci)
		cout << i << ' ';
	cout << endl;
	return 0;
}