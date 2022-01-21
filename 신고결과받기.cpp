#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    int maxcnt = 0;
    vector<int> answer(id_list.size());
    map<string, int> id, cnt;
    vector<vector<int>> table(id_list.size(), vector<int>(id_list.size()));
    for (int i = 0; i < id_list.size(); i++)
        id[id_list[i]] = i;

    for (int i = 0; i < report.size(); i++)
    {
        int idx = 0;
        string call = "", reporter = "", command = report[i];
        while (command[idx] != ' ')
            call += command[idx++];
        while (idx != command.length() - 1)
            reporter += command[++idx];
        if (!table[id[call]][id[reporter]])
        {
            table[id[call]][id[reporter]] = 1;
            cnt[reporter]++;
            maxcnt = max(maxcnt, cnt[reporter]);
        }
    }

    for (int i = 0; i < id_list.size(); i++)
    {
        for (int j = 0; j < id_list.size(); j++)
        {
            if (table[i][j] && cnt[id_list[j]] >= k)
                answer[i]++;
        }
    }

    if (maxcnt < k)
        answer = { 0, 0 };

    return answer;
}