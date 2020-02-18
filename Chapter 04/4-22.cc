#include <iostream>
#include <vector>
using namespace std;
// if statement 

//int main()
//{
//	int score;
//	cin >> score;
//	if (score > 90)
//		cout << "high pass" << endl;
//	else if (score > 75)
//		cout << "pass" << endl;
//	else if (score >= 60)
//		cout << "low pass" << endl;
//	else
//		cout << "fail" << endl;
//	return 0;
//}

// condition expression
int main()
{
	int score;
	cin >> score;
	cout << ((score > 90) ? "high pass" : (score > 75) ? "pass" : (score >= 60) ? "low pass" : "fail");
	cout << endl;
	return 0;
}