#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
   
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost.at(i) == reserve.at(j))
            {
                reserve.at(j) = -1;
                lost.at(i) = 0;
                break;
            }
        }
    }

    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost.at(i) == 0)
                break;

            if (lost.at(i) - 1 == reserve.at(j))
            {
                reserve.at(j) = -1;
                break;
            }
            else if (lost.at(i) + 1 == reserve.at(j))
            {
                reserve.at(j) = -1;
                break;
            }
            else if (j == reserve.size() - 1)
                n--;
        }
    }
    return n;
}

void main()
{
    int n = 8;
    vector<int> lost;
    lost.push_back(3);
    lost.push_back(7);
    lost.push_back(8);
    vector<int> reverse;
    reverse.push_back(2);
    reverse.push_back(5);
    reverse.push_back(6);
    reverse.push_back(7);
    cout << solution(n, lost, reverse) << endl;
}