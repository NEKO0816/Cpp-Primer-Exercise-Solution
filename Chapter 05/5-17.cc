#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vec1{ 0,1,1,2};
	vector<int> vec2{ 0,1,1,2,3,5,8 };
	if (vec1.size() > vec2.size())
	{
		vector<int> tempVec = vec2;
		vec2 = vec1;
		vec1 = tempVec;
	}
	
	bool flag = true;
	for (decltype(vec1.size()) i = 0; i != vec1.size(); ++i)
	{
		if (vec1[i] != vec2[i])
		{
			flag = false;
			break;
		}
	}

	cout << (flag ? "True" : "False") << endl;
	return 0;
}