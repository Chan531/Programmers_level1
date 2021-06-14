#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> num;
    num.push_back(arr[0]);
    for (auto i : arr)
    {
        if (num.back() == i)
            continue;
        else
            num.push_back(i);
    }
    return num;
}