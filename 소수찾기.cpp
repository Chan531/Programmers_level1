#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
	int answer = 0;
	//int v[100001];
	vector<int> v(2);
	for (int i = 2; i <= n; i++)
		v.push_back(i);

	for (int i = 2; i <= n; i++)
	{
		if (v[i] == 0)
			continue;

		for (int j = 2 * i; j <= n; j += i)
		{
			v[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (v[i] != 0)
			answer++;
	}
	return answer;
}