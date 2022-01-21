#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    vector<int> width, height;
    for (int i = 0; i < sizes.size(); i++)
    {
        width.push_back(max(sizes[i][0], sizes[i][1]));
        height.push_back(min(sizes[i][0], sizes[i][1]));
    }
    return *max_element(width.begin(), width.end()) * *max_element(height.begin(), height.end());
}