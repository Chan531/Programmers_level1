#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int a = 0;
    int b = 0;
    for (auto i : s)
    {
        if (i == 80 || i == 112)
            a++;
        else if (i == 89 || i == 121)
            b++;
    }
    if (a == b)
        return true;
    return false;

    // return a == b;�ϸ� 2�� ���� �� ����
}

void main()
{
    solution("pPyY");
}