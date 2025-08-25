#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int count = -1;
    
    
    
    for(int i = 0; i < arr.size() ; i++){
        if(arr[i] % divisor == 0){
            answer.push_back(arr[i]);
            count++;
        }
    }
    if(count > -1){
        sort(answer.begin(),answer.end(),less<>());
    }else{
        answer.push_back(count);
    }
    
    
    return answer;
}