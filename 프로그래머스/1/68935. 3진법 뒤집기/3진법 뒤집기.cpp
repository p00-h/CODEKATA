#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int multi = 1;
    vector<int> vec;
    
    while(n){
        vec.push_back(n%3);
        n /= 3;
    }
    for(int i = vec.size()-1; i >= 0; i--){
        answer += vec[i]*multi;
        multi *= 3;
    }
    return answer;
}