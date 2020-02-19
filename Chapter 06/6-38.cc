#include <iostream>
using namespace std;

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd)& arrRef(int i)
{
	return (i % 2 ? odd : even);
}

int main()
{
	for (int i = 0; i != 5; ++i)
		cout << arrRef(4)[i] << ' ';
	cout << endl;
	return 0;
}