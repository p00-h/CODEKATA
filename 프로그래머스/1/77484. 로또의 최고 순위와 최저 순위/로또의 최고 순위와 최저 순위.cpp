#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int result(int a){
    switch(a){
        case 2: return 5; break;
        case 3: return 4; break;
        case 4: return 3; break;
        case 5: return 2; break;
        case 6: return 1; break;
        default:return 6; break;
    }
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count = 0;
    int zeroCount = 0;
    
    for(int i = 0; i < lottos.size(); i++){
        if(lottos[i] == 0){
            zeroCount++;
            for(int j= 0; j < win_nums.size(); j ++){
                if((find(lottos.begin(),lottos.end(),win_nums[j])) == lottos.end()){
                    lottos[i] = win_nums[j];
                }
            }
        } 
        if((find(win_nums.begin(),win_nums.end(),lottos[i])) != win_nums.end()) count++;
    }
    
    answer.push_back(result(count));
    answer.push_back(result(count - zeroCount));
    
    return answer;
}