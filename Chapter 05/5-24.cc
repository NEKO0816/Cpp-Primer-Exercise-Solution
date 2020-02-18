#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (0 == b)
	{
		throw runtime_error("Use zero as a divisor.");
	}
	cout << a / b << endl;
	return 0;
}