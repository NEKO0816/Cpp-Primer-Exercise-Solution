#include <iostream>
#include <vector>
using namespace std;

int add_int(int a, int b) 
{
	return a + b;
};

int minus_int(int a, int b)
{
	return a - b;
};

int mul_int(int a, int b)
{
	return a * b;
};

int div_int(int a, int b)
{
	return a / b;
};

using PF = int (*)(int, int);
vector<PF> vecPF{add_int,minus_int,mul_int,div_int };

int main()
{
	cout << vecPF[0](10, 5) << endl;
	cout << vecPF[1](10, 5) << endl;
	cout << vecPF[2](10, 5) << endl;
	cout << vecPF[3](10, 5) << endl;
	return 0;
}