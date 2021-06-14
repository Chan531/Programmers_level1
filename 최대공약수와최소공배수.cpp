#include <string>
#include <vector>

using namespace std;

int gcd(int n, int m)
{
    int o = 0;
    while (m != 0)
    {
        o = n % m;
        n = m;
        m = o;
    }
    return n;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int g = gcd(n, m);
    answer.push_back(g);
    answer.push_back(n * m / g);
    return answer;
}

void main()
{
    solution(2, 5);
}