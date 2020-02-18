#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		try
		{
			if (0 == b)
			{
				throw runtime_error("Use zero as a divisor.\n");
			}
			cout << a / b << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what()
				<< "Would you like to input again(y or n)"
				<< endl;
			char c;
			cin >> c;
			if (!cin || 'n' == c)
				break;
		}
	}
	return 0;
}