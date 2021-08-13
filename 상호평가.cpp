#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

string solution(vector<vector<int>> scores) {
    double sum;
    string answer = "";
    for (int i = 0; i < scores[0].size(); i++)
    {
        vector<int> score;
        sum = 0;
        for (int j = 0; j < scores.size(); j++)
        {
            score.push_back(scores[j][i]);
        }
        sum = accumulate(score.begin(), score.end(), 0);
        if ((scores[i][i] == *max_element(score.begin(), score.end()) && count(score.begin(), score.end(), scores[i][i]) == 1)
            || (scores[i][i] == *min_element(score.begin(), score.end()) && count(score.begin(), score.end(), scores[i][i]) == 1))
        {
            sum -= scores[i][i];
            sum /= (scores.size() - 1);
        }
        else
            sum /= scores.size();
        if (sum >= 90)
            answer += "A";
        else if (sum >= 80)
            answer += "B";
        else if (sum >= 70)
            answer += "C";
        else if (sum >= 50)
            answer += "D";
        else
            answer += "F";
    }
    return answer;
}