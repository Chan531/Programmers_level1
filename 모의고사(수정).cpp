#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> answers)
{
	int one = 0;
	int two = 0;
	int three = 0;
	int max = 0;
	vector<int> o = { 1,2,3,4,5 };
	vector<int> t = { 2,1,2,3,2,4,2,5 };
	vector<int> th = { 3,3,1,1,2,2,4,4,5,5 };
	map<int, int> m;
	vector<int> answer;
	for (int i = 0; i < answers.size(); i++)
	{
		if (one == o.size())
			one = 0;
		if (answers[i] == o[one])
			m[1]++;
		one++;
	}

	if (max < m[1])
		max = m[1];
	
	for (int i = 0; i < answers.size(); i++)
	{
		if (two == t.size())
			two = 0;
		if (answers[i] == t[two])
			m[2]++;
		two++;
	}
	
	if (max < m[2])
		max = m[2];
	
	for (int i = 0; i < answers.size(); i++)
	{
		if (three == th.size())
			three = 0;
		if (answers[i] == th[three])
			m[3]++;
		three++;
	}
	
	if (max < m[3])
		max = m[3];

	for (int i = 1; i < 4; i++)
	{
		if (m[i] == max)
			answer.push_back(i);
	}
	return answer;
}

int main(void)
{
	solution({ 3,3,1,1,1,1,2,3,4,5 });
}