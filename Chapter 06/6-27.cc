#include <iostream>
using namespace std;

int int_sum(initializer_list<int> li)
{
	int ret = 0;
	for (auto i : li)
	{
		ret += i;
	}
	return ret;
}
int main()
{
	cout << int_sum({1, 2, 3, 4, 5,6,7,8,9,10}) << endl;
	return 0;
}