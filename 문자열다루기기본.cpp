#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool solution(string s) {
	if (s.length() != 4 && s.length() != 6)
		return false;
	for (auto i : s)
	{
		if (i > 47 && i < 58)
			continue;
		else
			return false;
	}
	return true;
}

void main()
{
	solution("a234");
	solution("1234");
}