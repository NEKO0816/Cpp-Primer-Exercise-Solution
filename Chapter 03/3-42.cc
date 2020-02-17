#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec{ 0,1,2,3,4 };
	int a[5];
	for (int i = 0; i != vec.size(); ++i)
		a[i] = vec[i];
	for (auto i : a)
		cout << i << ' ';
	cout << endl;
	return 0;
}