#include <iostream>

using namespace std;

void print(const int& i)
{
	cout << i << endl;
}

void print(const int a[],size_t sz)
{
	for (int i = 0; i != sz; ++i)
	{
		cout << i << ' ';
	}
	cout << endl;
}

int main()
{
	int i = 0;
	int j[] = { 0,1 };
	print(i);
	print(j,size(j));
	return 0;
}