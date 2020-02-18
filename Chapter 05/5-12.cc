#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int ffCnt = 0, flCnt = 0, fiCnt = 0;
	for (auto iter = str.begin();iter!=str.end()-1;++iter)
	{
		auto ch = *iter;
		if ('f' == ch)
		{
			auto nxtch = *(iter + 1);
			switch (nxtch)
			{
			case'f':
				++ffCnt;
				break;
			case'l':
				++flCnt;
				break;
			case'i':
				++fiCnt;
				break;
			}
		}
	}
	cout << "ff  fl  fi" << endl;
	cout <<" "<< ffCnt << "   " << flCnt << "   " << fiCnt << endl;
	return 0;
}