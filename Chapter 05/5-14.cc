#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> words;
	vector<int> timeCnt;
	int Cnt = 1;
	string word, last_word;
	//process the first word
	cin >> last_word;
	words.push_back(last_word);
	
	while (cin >> word)
	{
		if (word == last_word)
		{
			++Cnt;
		}
		else
		{
			words.push_back(word);
			last_word = word;
			timeCnt.push_back(Cnt);
			Cnt = 1;
		}
	}
	
	//push the last Counter into vector
	timeCnt.push_back(Cnt);
	
	int index = 0;
	int maxCnt = 0;
	//find the max index
	for (auto i = 0; i != timeCnt.size(); ++i)
	{
		if (maxCnt < timeCnt[i])
		{
			maxCnt = timeCnt[i];
			index = i;
		}
	}
	cout << "It is " <<'\"'<< words[index] <<'\"'<<endl;
	cout << "It appears " << maxCnt << " times." << endl;
	return 0;
}