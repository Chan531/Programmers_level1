#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> m;
    for (auto i : participant)
    {
        m[i]++;
    }
    for (auto i : completion)
    {
        m[i]--;
    }
    for (auto i : participant)
    {
        if (m[i] == 1)
            return i;
    }
}