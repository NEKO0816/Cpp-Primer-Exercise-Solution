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