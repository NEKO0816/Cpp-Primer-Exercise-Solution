#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<int> v1; //empty vector, no element. 
	vector<int> v2(10); //10 elements, their values are all 0
	vector<int> v3(10, 42); // 10 elements, their values are all 42
	vector<int> v4{ 10 }; //1 elemnet, value is 10
	vector<int> v5{ 10,42 }; // 2 elements,values are 10 and 42
	vector<string> v6{ 10 }; // 10 elements,10 empty stirngs.
	vector <string> v7{ 10,"hi" }; // 10 elemnets, values are "hi"


	cout << "Output of v2:" << endl;
	for (auto iter = v2.cbegin();iter != v2.cend();++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "Output of v3:" << endl;
	for (auto iter = v3.cbegin();iter != v3.cend();++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "Output of v4:" << endl;
	for (auto iter = v4.cbegin(); iter != v4.cend();++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "Output of v5:" << endl;
	for (auto iter = v5.cbegin(); iter != v5.cend();++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "Output of v7:" << endl;
	for (auto iter = v7.cbegin();iter != v7.cend();++iter)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}