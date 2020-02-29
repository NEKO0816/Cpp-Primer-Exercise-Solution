#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int cnt = 0;
	for (auto ch : str)
	{
		if (ch == 'a' || ch == 'A' ||
			ch == 'e' || ch == 'E' ||
			ch == 'i' || ch == 'I' ||
			ch == 'o' || ch == 'O' ||
			ch == 'u' || ch == 'U')
		{
			++cnt;
		}
	}
	cout << cnt << endl;
	return 0;
}