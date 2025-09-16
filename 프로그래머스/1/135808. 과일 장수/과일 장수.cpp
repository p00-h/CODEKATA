#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(),score.end(),greater<>());
    
     for(int i =0; i< score.size() / m; i++){
        int min = 10, startPos = i * m;      
        for(int j = startPos; j < startPos + m; j ++ ){
            if(score[j] < min){
                min = score[j];
            }
        }
        answer += min * m;

    }
    
    return answer;
}