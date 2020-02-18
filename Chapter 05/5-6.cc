#include <iostream>
#include <string>
using namespace std;
int main()
{
	string eval = "";
	int score = 0;
	cin >> score;
	eval = ((score == 100) ? "A++"
		: (score >= 90) ? "A"
		: (score >= 80) ? "B"
		: (score >= 70) ? "C"
		: (score >= 60) ? "D"
		: "F");
	cout << eval << endl;
	return 0;
}