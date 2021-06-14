#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<double> fail(N + 2);
    vector<double> per(1);
    vector<int> result;
    double all = stages.size();
    for (auto i : stages)
    {
        fail[i]++;
    }

    for (int i = 1; i < N + 1; i++)
    {
        if (all != 0)
        {
            per.push_back(fail[i] / all);
            all -= fail[i];
        }
        else if (all == 0 && i <= N)
            per.push_back(0);
    }

    all = per[1];

    while (result.size() < N)
    {
        for (int i = 1; i < per.size(); i++)
        {
            if (per[i] > all)
            {
                all = per[i];
            }
            else
            {

            }
            if (i == per.size() - 1)
            {
                for (int j = 1; j < per.size(); j++)
                {
                    if (per[j] == all)
                    {
                        result.push_back(j);
                        per[j] = -1;
                    }
                }
                all = -1;
                i = 0;
            }
            if (result.size() == N)
                break;
        }
    }
    return result;
}

void main()
{
    solution(5, { 2,1,2,6,2,4,3,3 });
}