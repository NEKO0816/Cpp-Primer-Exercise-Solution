#include <iostream>
#include <stdexcept>
using namespace std;

int fact(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return fact(n - 1) * n;
}

void interAction()
{
	cout << "Please input an integer:" << endl;
	int n;
	while (cin >> n)
	{
		try
		{
			if (n < 0 || n > 31)
			{
				throw overflow_error("Your input is out of range.");
			}
			cout << fact(n) << endl;
			break;
		}
		catch (overflow_error err)
		{
			cout << err.what() << endl;
			cout << "Would you like to input again(y or n)" << endl;
			char ch;
			cin >> ch;
			if (ch == 'n')
				break;
			else
				cout << "Please input an integer:" << endl;
		}
	}
}

int main()
{
	interAction();
	return 0;
}