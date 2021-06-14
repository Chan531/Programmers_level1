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

void main()
{
    vector <vector<int>> board;

    vector <int> moves;
    moves.push_back(1);
    moves.push_back(5);
    moves.push_back(3);
    moves.push_back(5);
    moves.push_back(1);
    moves.push_back(2);
    moves.push_back(1);
    moves.push_back(4);

    vector <int> v1(5);

    vector <int> v2(2);
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(3);
    
    vector <int> v3(1);
    v3.push_back(2);
    v3.push_back(5);
    v3.push_back(0);
    v3.push_back(1);
    
    vector <int> v4;
    v4.push_back(4);
    v4.push_back(2);
    v4.push_back(4);
    v4.push_back(4);
    v4.push_back(2);
    
    vector <int> v5;
    v5.push_back(3);
    v5.push_back(5);
    v5.push_back(1);
    v5.push_back(3);
    v5.push_back(1);

    board.push_back(v1);
    board.push_back(v2);
    board.push_back(v3);
    board.push_back(v4);
    board.push_back(v5);

    cout << solution(board, moves) << endl;
}