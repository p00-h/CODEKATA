#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> temp;
    
    for (int i = 0; i < s.size(); i ++){
        char c = s[i];
        if(temp.find(c) == temp.end()){
            answer.push_back(-1);
        }
        else{
            answer.push_back(i - temp[c]);
        }   
        temp[c] = i;
    }
    
    return answer;
}