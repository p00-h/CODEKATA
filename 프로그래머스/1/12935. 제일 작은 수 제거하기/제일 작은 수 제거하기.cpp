#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1){
        arr[0] = -1;
    }
    else{
        auto it = min_element(arr.begin(), arr.end());
        arr.erase(it);
    }
    
    
    return arr;
}