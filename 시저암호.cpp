#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (int i = 0; i < s.length(); i++)
    {
        int k = 0;
        int j = 1;
        while (1)
        {
            if (s[i] == 32)
                break;
            else
            {
                k++;
                s[i] += j;
                if (s[i] == 91 || s[i] == 123)
                    s[i] -= 26;
                if (k == n)
                    break;
            }
        }
    }
    return s;
}

void main()
{
    solution("AaZz", 25);
    solution("Z", 3);
}