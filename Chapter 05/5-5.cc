#include <iostream>
#include <string>
using namespace std;
int main()
{
	string eval = "";
	int score = 0;
	cin >> score;
	if (score == 100)
	{
		eval = "A++";
	}
	else if (score >=90)
	{
		eval = "A";
	}
	else if (score >= 80)
	{
		eval = "B";
	}
	else if (score >= 70)
	{
		eval = "C";
	}
	else if (score >= 60)
	{
		eval = "D";
	}
	else
	{
		eval = "F";
	}
	cout << eval << endl;
	return 0;
}
