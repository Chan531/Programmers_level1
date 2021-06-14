#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    string s1 = "";
    string s2 = "";
    string s3 = "";
    vector<string> realanswer;
 
    for (int i = 0; i < arr1.size(); i++)
    {
        while (arr1[i] > 0)
        {
            if (arr1[i] % 2 == 1)
                s1 += "1";
            else
                s1 += "0";
            arr1[i] /= 2;
        }
        if (s1.length() != n)
        {
            while (s1.length() < n)
                s1 += "0";
        }
        while (arr2[i] > 0)
        {
            if (arr2[i] % 2 == 1)
                s2 += "1";
            else
                s2 += "0";
            arr2[i] /= 2;
        }
        if (s2.length() != n)
        {
            while (s2.length() < n)
                s2 += "0";
        }
        for (int j = 0; j < n; j++)
        {
            (s1[j] + s2[j] >= 97) ? s3 += "#" : s3 += " ";
        }
        reverse(s3.begin(), s3.end());
        realanswer.push_back(s3);
        s1 = "";
        s2 = "";
        s3 = "";
    }
    return realanswer;
}

void main()
{
    solution(5, { 9,20,28,18,11 }, { 30,1,21,17,28 });
}