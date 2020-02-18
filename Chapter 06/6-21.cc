#include <iostream>

using namespace std;

int max_int(int i,const int* cp)
{
	return i > * cp ? i : *cp;
}

int main()
{
	int v1 = 5, v2 = 10;
	int* cp = &v2;
	cout << max_int(v1, cp) << endl;

	return 0;
}