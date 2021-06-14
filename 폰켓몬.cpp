#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int a = 0;
    a = nums.size() / 2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    if (nums.size() >= a)
        return a;
    else
        return nums.size();
}

void main()
{
    solution({ 3,3,3,2,2,2 });
}