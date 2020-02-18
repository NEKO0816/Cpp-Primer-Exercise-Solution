#include <iostream>
using namespace std;

void mySwap(int* a, int* b);

int main()
{
	int a = 5, b = 3;
	swap(a, b);
	cout << a <<' '<< b << endl;
	return 0;
}

void mySwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}