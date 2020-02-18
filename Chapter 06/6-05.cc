#include <iostream>
using namespace std;

double myAbs(double n)
{
	return (n > 0) ? n : -n;
}

int main()
{
	int n;
	cin >> n;
	cout << myAbs(n) << endl;;
	return 0;
}