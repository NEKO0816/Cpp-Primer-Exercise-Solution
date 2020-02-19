#include <iostream>
#include <vector>
using namespace std;

int print_vector(const vector<int> cv,const int& index)
{
	if (index == cv.size())
	{
		cout << endl;
		return index;
	}
	else
	{
		cout << cv[index] << ' ';
		return print_vector(cv, index + 1);
	}
}
int main()
{
	vector<int> vci{ 1,2,3,4,5 };
	print_vector(vci, 0);
	return 0;
}