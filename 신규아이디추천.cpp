#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    for (int i = 0; i < new_id.length(); i++)
    {
        if (new_id[i] > 64 && new_id[i] < 91)
            new_id[i] += 32;
    }
    for (int i = 0; i < new_id.length(); i++)
    {
        if (new_id[i] != 45 && new_id[i] != 46 && new_id[i] != 95 && new_id[i] != 48 && new_id[i] != 49 && new_id[i] != 50 
            && new_id[i] != 51 && new_id[i] != 52 && new_id[i] != 53 && new_id[i] != 54 && new_id[i] != 55 && new_id[i] != 56
            && new_id[i] != 57 && new_id[i] != 97 && new_id[i] != 98 && new_id[i] != 99 && new_id[i] != 100 && new_id[i] != 101
            && new_id[i] != 102 && new_id[i] != 103 && new_id[i] != 104 && new_id[i] != 105 && new_id[i] != 106 && new_id[i] != 107
            && new_id[i] != 108 && new_id[i] != 109 && new_id[i] != 110 && new_id[i] != 111 && new_id[i] != 112 && new_id[i] != 113
            && new_id[i] != 114 && new_id[i] != 115 && new_id[i] != 116 && new_id[i] != 117 && new_id[i] != 118 && new_id[i] != 119
            && new_id[i] != 120 && new_id[i] != 121 && new_id[i] != 122)
        {
            new_id.erase(new_id.begin() + i);
            i--;
        }
    }
    for (int i = 0; i < new_id.length() - 1; i++)
    {
        if (new_id[i] == 46 && new_id[i + 1] == 46)
        {
            new_id.erase(new_id.begin() + i);
            i--;
        }
    }
    if (new_id[0] == 46)
        new_id.erase(new_id.begin() + 0);
    if (new_id.length() != 0)
    {
        if (new_id[new_id.length() - 1] == 46)
            new_id.erase(new_id.begin() + new_id.length() - 1);
    }
    if (new_id.empty() == true)
        new_id += 'a';
    if (new_id.length() > 15)
        new_id.erase(new_id.begin() + 15, new_id.begin() + new_id.length());
    if (new_id[new_id.length() - 1] == 46)
        new_id.erase(new_id.begin() + new_id.length() - 1);
    if (new_id.length() < 3)
        new_id += new_id[new_id.length() - 1];
    if (new_id.length() < 3)
        new_id += new_id[new_id.length() - 1];
    return new_id;
}

void main()
{
    //solution("=.=");
    //solution("123_.def");
    solution("z-+.^.");
}