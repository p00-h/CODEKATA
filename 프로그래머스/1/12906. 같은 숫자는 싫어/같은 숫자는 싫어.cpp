#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] != arr[i+1])
            answer.push_back(arr[i]);
    }
    if(answer.empty()) answer.push_back(arr[0]);

    return answer;
}