#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string s = "";
    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "KIM")
        {
            s += "김서방은 ";
            s += to_string(i);
            s += "에 있다";
            break;
        }
    }
    return s;
}

void main()
{
    cout << solution({ "JANE", "KIM" });
}