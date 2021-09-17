#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0, index = 0;
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < 10; i++)
        if (numbers[index++] != i)
        {
            index--;
            answer += i;
        }
    return answer;
}