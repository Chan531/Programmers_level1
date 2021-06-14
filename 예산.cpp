#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int i = 0;
    sort(d.begin(), d.end());
    while (budget - d[i] >= 0)
    {
        budget -= d[i];
        i++;
        if (i == d.size())
            break;
    }
    return i;
}

void main()
{
    vector<int> list;
    list.push_back(2);
    list.push_back(3);
    list.push_back(3);
    list.push_back(2);
    cout << solution(list, 10) << endl;
}