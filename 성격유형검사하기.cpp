#include <string>
#include <vector>

using namespace std;

vector<int> score(26);

void check(char a, char b, int n)
{
    if (n == 1)
        score[a - 'A'] += 3;

    else if (n == 2)
        score[a - 'A'] += 2;

    else if (n == 3)
        score[a - 'A']++;

    else if (n == 5)
        score[b - 'A']++;

    else if (n == 6)
        score[b - 'A'] += 2;

    else if (n == 7)
        score[b - 'A'] += 3;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    for (int i = 0; i < survey.size(); i++)
        check(survey[i][0], survey[i][1], choices[i]);

    if (score['R' - 'A'] >= score['T' - 'A'])
        answer += 'R';

    else
        answer += 'T';

    if (score['C' - 'A'] >= score['F' - 'A'])
        answer += 'C';

    else
        answer += 'F';

    if (score['J' - 'A'] >= score['M' - 'A'])
        answer += 'J';

    else
        answer += 'M';

    if (score['A' - 'A'] >= score['N' - 'A'])
        answer += 'A';

    else
        answer += 'N';

    return answer;
}