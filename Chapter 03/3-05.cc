#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, sum;
	while (cin >> str)
		sum = sum + str + ' ';
	cout << sum << endl;
	return 0;
}