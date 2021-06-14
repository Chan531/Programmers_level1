#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    string s = "";
    int answer = 0;
    while (n > 0)
    {
        s += to_string(n % 3);
        n /= 3;
    }

    for (int i = 0; i < s.length(); i++)
        answer += (pow(3, s.length() - i - 1) * (s[i] - 48));

    return answer;
}

void main()
{
    solution(45);
}