#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string> text{ "do you think you are a good guy.",
		"no, I don't.",
		"so you must make yourself better." ,
		""
	};

	for (auto iter = text.begin(); iter != text.end();++iter)
		if (!iter->empty())
			(*iter)[0] = toupper((*iter)[0]);

	for (auto str : text)
		if (!str.empty())
			cout << str << endl;
	return 0;
}