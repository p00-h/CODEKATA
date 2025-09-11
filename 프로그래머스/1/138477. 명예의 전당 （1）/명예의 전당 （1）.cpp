#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> arr;
    
    for(int i = 0; i < score.size(); i++){
        arr.push_back(score[i]);
        sort(arr.begin(),arr.end(),greater<int>());
        
        if(arr.size() < k){
            answer.push_back(arr.back());
        }
        else{
            answer.push_back(arr[k-1]);
        }
    }
    
    return answer;
}