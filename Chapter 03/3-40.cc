#include<iostream>
using namespace std;
int main()
{
	char s1[20] = "Hello, "; // this place must use a larger size char array, or it will overflow when you use strcat().
	char s2[] = "world!";
	char s3[20];
	strcat(s1, s2);
	strcpy(s3, s1);
	cout << s3 << endl;
	return 0;
}