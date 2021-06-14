#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a >= b)
    {
        for (int i = b; b <= a; i++)
        {
            answer += i;
            if (i == a)
                break;
        }
    }
    else
    {
        for (int i = a; a <= b; i++)
        {
            answer += i;
            if (i == b)
                break;
        }
    }
    return answer;
}

void main() {
    cout << solution(3, 5) << endl;
}