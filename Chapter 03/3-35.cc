#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0;i != 10;++i)
		a[i] = i;
	for (int i = 0;i != 10;++i)
		cout << a[i] << ' ';
	cout << endl;

	int* pbegin = begin(a);
	int* pend = end(a);
	for (auto p = pbegin; p != pend; ++p)
		*p = 0;
	for (int i = 0; i != 10; ++i)
		cout << a[i] << ' ';
	cout << endl;
	return 0;
}