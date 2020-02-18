#include <iostream>
using namespace std;

void reset(int &n)
{
	n = 0;
}

int main()
{
	int ival = 15;
	reset(ival);
	cout << ival << endl;
	return 0;
}