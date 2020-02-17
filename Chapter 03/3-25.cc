#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<unsigned> scores(11);
	unsigned grade;
	while (cin >> grade)
		++ (*(scores.begin() + (grade / 10)));
	for (auto i : scores)
		cout << i << ' ';
	cout << endl;
	return 0;
		
}