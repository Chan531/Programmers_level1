#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    vector<int> v;
    int i = 0;
    bool answer = true;
    string n = to_string(x);
    for (auto i : n)
        v.push_back(i - 48);
    for (auto k : v)
        i += k;
    return (x % i == 0);
}

void main()
{
    solution(18);
    solution(32);
}