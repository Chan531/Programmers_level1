#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string a = to_string(n);
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.length(); i++)
    {
        answer.push_back(int(a[i]) - 48);
    }
    return answer;
}

void main()
{
    solution(12345);
}