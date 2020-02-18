#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	for (auto ch : str)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
		}

	}
	cout << "A  E  I  O  U" << endl;
	cout << aCnt <<"  "<< eCnt << "  " << iCnt << "  " << oCnt << "  " << uCnt << endl;
	return 0;
}