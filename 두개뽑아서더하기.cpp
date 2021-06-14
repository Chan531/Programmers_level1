#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> list1;
    vector<int> list2;
    int a = 0;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        list1.push_back(numbers[a] + numbers[i + 1]);
        if (i == numbers.size() - 2)
        {
            i = a;
            a++;
        }
    }

    a = 0;

    sort(list1.begin(), list1.end());
    list2.push_back(list1[0]);

    for (int i = 1; i < list1.size(); i++)
    {
        if (list2[a] == list1[i])
            continue;
        else
        {
            list2.push_back(list1[i]);
            a++;
        }
    }
    return list2;
}

void main()
{
    vector<int> num;
    num.push_back(2);
    num.push_back(1);
    num.push_back(3);
    num.push_back(4);
    num.push_back(1);
    solution(num);
}