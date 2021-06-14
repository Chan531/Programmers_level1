#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> num;
vector<int> list;
int a = 0;
int r = 3;

int check(int n, vector<int> nums)
{
    for (auto i : nums)
    {
        if (i == n)
            return n;
        else if (i == nums.back())
        {
            n++;
            return check(n, nums);
        }
        if (n > nums.back())
            return 0;
    }
}

void combination(int n, vector<int> nums)
{
    if (num.size() == r)
    {
        for (auto i : num)
            a += i;
        list.push_back(a);
        a = 0;
    }
    else if (n > nums.back())
    {
    
    }
    else
    {
        n = check(n, nums);
        if (n != 0)
        {
            num.push_back(n);
            combination(n + 1, nums);
            num.pop_back();
            combination(n + 1, nums);
        }
    }
}

int solution(vector<int> nums) {
    int answer = 0;
    sort(nums.begin(), nums.end());
    combination(nums[0], nums);
    sort(list.begin(), list.end());
    unique(list.begin(), list.end());
    list.erase(unique(list.begin(), list.end()), list.end());

    for (auto i : list)
    {
        int k = 2;
        while (1)
        {
            if (k <= sqrt(i))
            {
                if (i % k == 0)
                {
                    k = 2;
                    break;
                }
                else
                    k++;
            }
            else
            {
                answer++;
                k = 2;
                break;
            }
        }
    }
    return answer;
}

void main() {
    solution({ 1,2,7, 6, 4 });
}