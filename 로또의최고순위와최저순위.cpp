#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());

    int n = 0;

    for (auto i : lottos)
    {
        if (i == 0)
            n++;
    }

    if (n == 6)
    {
        answer.push_back(1);
        answer.push_back(6);
        return answer;
    }
    
    int r = 0;
    int m = n;

    for (int i = 0; i < lottos.size(); i++)
    {
        if (lottos[m] == win_nums[i])
        {
            m++;
            r++;
        }
        if (m == lottos.size())
            break;
        if ((lottos[m] < win_nums[i]))
        {
            m++;
            i--;
        }
        if (m == lottos.size())
            break;
    }

    if (r == 0 && n == 0)
    {
        answer.push_back(6);
        answer.push_back(6);
        return answer;
    }
    
    answer.push_back(7 - n - r);
    if (r == 0)
        r++;
    answer.push_back(7 - r);
    return answer;
}

void main()
{
    solution({ 0,0,0,0,0,0 }, { 31, 10, 45, 1, 6, 19 });
}