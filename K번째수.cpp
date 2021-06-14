#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> sorts;
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++)
    {
        for (int j = commands[i][0]; j <= commands[i][1]; j++)
        {
            sorts.push_back(array[j - 1]);
        }
        sort(sorts.begin(), sorts.end());
        answer.push_back(sorts.at(commands[i][2] - 1));
        sorts.clear();
    }

    return answer;
}

void main()
{
    vector<int> array;
    array.push_back(1);
    array.push_back(5);
    array.push_back(2);
    array.push_back(6);
    array.push_back(3);
    array.push_back(7);
    array.push_back(4);

    vector<vector<int>> commands;
    commands.push_back({ 2,5,3 });
    commands.push_back({ 4,4,1 });
    commands.push_back({ 1,7,3 });

    solution(array, commands);
}