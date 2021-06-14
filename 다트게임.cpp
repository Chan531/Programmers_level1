#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    vector<int> cage;
    vector<string> bonus;
    vector<string> option;
    int point = 0;
    for (int i = 0; i < dartResult.length(); i++)
    {
        if (dartResult[i] == '1' && dartResult[i + 1] == '0')
        {
            i++;
            point = 10;
        }
        
        else if (dartResult[i] == '1' && dartResult[i + 1] != '0')
        {
            point = 1;
        }

        else if (dartResult[i] > 49 && dartResult[i] < 58)
        {
            point = dartResult[i] - 48;
        }

        if (dartResult[i + 1] == 'S')
        {
            i++;
        }
        else if (dartResult[i + 1] == 'D')
        {
            point = pow(point, 2);
            i++;
        }

        else if (dartResult[i + 1] == 'T')
        {
            point = pow(point, 3);
            i++;
        }

        if (dartResult[i + 1] == '*')
        {
            point *= 2;
            if (cage.size() > 0)
            {
                cage.back() *= 2;
            }
            i++;
        }
        else if (dartResult[i + 1] == '#')
        {
            point *= -1;
            i++;
        }
        cage.push_back(point);
        point = 0;
    }
    for (auto i : cage)
    {
        point += i;
    }
    return point;
}

void main()
{
    solution("1S2D*3T");
}