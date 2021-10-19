#include <vector>

using namespace std;

int solution(int n) {
    vector<int> v(n + 1);
    for (int i = 2; i <= n; i++)
    {
        if (!v[i])
        {
            for (int j = i * 2; j <= n; j += i)
                v[j] = 1;
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (!v[i] && n % i == 1)
            return i;
    }
}