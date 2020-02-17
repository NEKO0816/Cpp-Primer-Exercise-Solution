#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str)) // read a line at a time
	//while (cin >> str) //read a word at a time.
		cout << str << endl;
	return 0;
}
