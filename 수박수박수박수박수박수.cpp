#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
            answer += "����";
    }
    else
    {
        for (int i = 0; i < (n - 1) / 2; i++)
            answer += "����";
        answer += "��";
    }
    return answer;
}

void main()
{
    cout << solution(3) << endl;
    cout << solution(4) << endl;
}