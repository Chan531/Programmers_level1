#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int pop = 0;
    vector<int> container;
    for (int i = 0; i < moves.size(); i++)
    {
        int a = 0;
        while (1)
        {
            if (a == board.size())
                break;
            if (board[a][moves.at(i) - 1] == 0)
                a++;
            else
            {
                container.push_back(board[a][moves.at(i) - 1]);
                board[a][moves.at(i) - 1] = 0;
                break;
            }
        }
        if (container.size() > 1)
        {
            if (container.at(container.size() - 2) == container.at(container.size() - 1))
            {
                container.pop_back();
                container.pop_back();
                pop++;
                pop++;
            }
        }
    }
    return pop;
}