#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int countA = 0, countB = 0 , countC = 0;
    
    for(int i = 0; i < answers.size(); i ++){
        if(answers[i] == a[i % a.size()]) countA++;
        if(answers[i] == b[i % b.size()]) countB++;
        if(answers[i] == c[i % c.size()]) countC++;
    }
    
    vector<int> answer;
    int maxCount = max({countA,countB,countC});
    if(maxCount == countA) answer.push_back(1);
    if(maxCount == countB) answer.push_back(2);
    if(maxCount == countC) answer.push_back(3);
    
    return answer;
}