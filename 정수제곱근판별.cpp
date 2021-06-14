#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long a = 0;
    while (a * a <= n)
    {
        if (n == a * a)
            return (a + 1) * (a + 1);
        else
            a++;
    }
    return -1;
}