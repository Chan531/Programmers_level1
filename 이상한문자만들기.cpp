#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int j = 0;
    int i = 0;

    while (i < s.length())
    {
        if (s[i] == 32)
        {
            i++;
            j = 0;
        }
        else if ((s[i] > 64 && s[i] < 91) && j % 2 == 0)
        {
            i++;
            j++;
        }
        else if ((s[i] > 64 && s[i] < 91) && j % 2 == 1)
        {
            s[i] += 32;
            i++;
            j++;
        }
        else if ((s[i] > 96 && s[i] < 123) && j % 2 == 0)
        {
            s[i] -= 32;
            i++;
            j++;
        }
        else if ((s[i] > 96 && s[i] < 123) && j % 2 == 1)
        {
            i++;
            j++;
        }
    }
    return s;
}