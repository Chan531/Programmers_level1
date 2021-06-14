#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    string hol = "Odd";
    string jjak = "Even";
    if (num < 0)
        num = abs(num);

    if (num % 2 == 1)
        return hol;
    else
        return jjak;
}

void main() {
    int a = 3;
    int b = 4;
    cout << abs(-3) << endl;
    cout << solution(a) << endl;
    cout << solution(b) << endl;
    cout << solution(0) << endl;
    cout << solution(-1) << endl;
}