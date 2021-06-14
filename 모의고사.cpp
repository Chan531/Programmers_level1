#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> a = { 1,2,3,4,5 };
    vector<int> b = { 2,1,2,3,2,4,2,5 };
    vector<int> c = { 3,3,1,1,2,2,4,4,5,5 };

    vector<int> d(3);
    int i = 0;
    int aa = 0;
    int bb = 0;
    int cc = 0;
    int aaa = 0;
    int bbb = 0;
    int ccc = 0;
    
    vector<int> list;

    while (i < answers.size())
    {
        if (answers[i] == a[aa])
        {
            aaa++;
        }
        if (answers[i] == b[bb])
        {
            bbb++;
        }

        if (answers[i] == c[cc])
        {
            ccc++;
        }

        aa++;
        bb++;
        cc++;

        if (aa == 5)
            aa = 0;

        if (bb == 8)
            bb = 0;

        if (cc == 10)
            cc = 0;
     
        if (i == answers.size() - 1)
        {
            if (aaa > bbb)
            {
                if (aaa > ccc)
                    list.push_back(1);          // 1
                else if (aaa == ccc)
                {
                    list.push_back(1);          // 1, 3
                    list.push_back(3);
                }
                else
                    list.push_back(3);
            }

            else if (aaa == bbb)
            {
                if (aaa > ccc)
                {
                    list.push_back(1);          // 1, 2
                    list.push_back(2);
                }
                else if (aaa < ccc)
                    list.push_back(3);          // 3

                else
                {
                    list.push_back(1);
                    list.push_back(2);          // 1, 2, 3
                    list.push_back(3);
                }
            }

            else
            {
                if (bbb == ccc)
                {
                    list.push_back(2);          // 2, 3
                    list.push_back(3);
                }
                else if (bbb > ccc)
                    list.push_back(2);          // 3
                else
                    list.push_back(3);
            }
        }
        i++;
    }
    return list;
}

void main()
{
    solution({ 1,2,3,4,5,1,2,3 });
}