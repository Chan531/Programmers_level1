#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	string answer = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] > 47 && s[i] < 58)
			answer += s[i];
		else if (s[i] == 122)
		{
			answer += '0';
			i += 3;
		}
		else if (s[i] == 111)
		{
			answer += '1';
			i += 2;
		}
		else if (s[i] == 116)
		{
			if (s[i + 1] == 119)
			{
				answer += '2';
				i += 2;
			}
			else
			{
				answer += '3';
				i += 4;
			}
		}
		else if (s[i] == 102)
		{
			if (s[i + 1] == 111)
			{
				answer += '4';
				i += 3;
			}
			else
			{
				answer += '5';
				i += 3;
			}
		}
		else if (s[i] == 115)
		{
			if (s[i + 1] == 105)
			{
				answer += '6';
				i += 2;
			}
			else
			{
				answer += '7';
				i += 4;
			}
		}
		else if (s[i] == 101)
		{
			answer += '8';
			i += 4;
		}
		else
		{
			answer += '9';
			i += 3;
		}
	}
	return stod(answer);
}

int main(void)
{
	solution("one4seveneight");
}