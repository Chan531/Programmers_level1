#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end());
    vector<string> answer;
    vector<char> v;
    int num = 0;
    for (auto i : strings)
    {
        v.push_back(i[n]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < strings.size(); i++)
    {
        if (strings[i] != "" && strings[i].at(n) == v[num])
        {
            answer.push_back(strings[i]);
            num++;
            strings[i] = "";
            i = -1;
        }
    }
    return answer;
}

int main()
{
    solution({ "abce", "abcd", "cdx" }, 2);
}