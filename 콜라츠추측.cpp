#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    long long n = num;
    int a = 0;
    while (1)
    {
        if (n == 1)
        {
            return a;
            break;
        }
        if (a == 500)
        {
            return -1;
            break;
        }
        if (n % 2 == 0)
        {
            n = n / 2;
            a++;
        }
        else 
        {
            n = n * 3 + 1;
            a++;
        }
    }
}

void main()
{
    cout << solution(6) << endl;
    cout << solution(626331) << endl;
}