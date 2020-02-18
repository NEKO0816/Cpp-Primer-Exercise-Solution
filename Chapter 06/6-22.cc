#include <iostream>

using namespace std;

void swap_pointer(int*& a, int*& b)
{
	int* temp = a;
	a = b;
	b = temp;
}

int main()
{
	int v1 = 5, v2 = 10;
	int* p1 = &v1, * p2 = &v2;
	swap_pointer(p1, p2);
	cout << *p1 << ' ' << *p2 << endl;
	return 0;
}