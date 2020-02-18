#include <iostream>
using namespace std;

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return fact(n - 1) * n;
}

int main()
{
	cout << fact(5) << endl;
	return 0;
}
