#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand)
{
	string s = "";
	int rloc = 10;
	int lloc = 12;
	int rdis = 0;
	int ldis = 0;
	for (auto i : numbers)
	{
		if (i == 0)
			i = 11;
		if (i == 1 || i == 4 || i == 7)
		{
			s += "L";
			lloc = i;
		}
		else if (i == 3 || i == 6 || i == 9)
		{
			s += "R";
			rloc = i;
		}
		else if (i == rloc)
			s += "R";
		else if (i == lloc)
			s += "L";
		else
		{
			int r = abs(rloc - i);
			int l = abs(lloc - i);
			if (r == 1 || r == 3)
				rdis = 1;
			else if (r == 2 || r == 4 || r == 6)
				rdis = 2;
			else if (r == 5 || r == 7 || r == 9)
				rdis = 3;
			else if (r == 8 || r == 10)
				rdis = 4;
			
			if (l == 1 || l == 3)
				ldis = 1;
			else if (l == 2 || l == 4 || l == 6)
				ldis = 2;
			else if (l == 5 || l == 7 || l == 9)
				ldis = 3;
			else if (l == 8 || l == 10)
				ldis = 4;

			if (ldis > rdis)
			{
				s += "R";
				rloc = i;
			}
			else if (ldis == rdis)
			{
				if (hand == "right")
				{
					s += "R";
					rloc = i;
				}
				else
				{
					s += "L";
					lloc = i;
				}
			}
			else
			{
				s += "L";
				lloc = i;
			}
		}
	}
	return s;
}

void main()
{
	solution({ 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 }, "right");
}