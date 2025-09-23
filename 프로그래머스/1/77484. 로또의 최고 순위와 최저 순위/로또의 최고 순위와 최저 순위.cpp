#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count = 0;
    int zeroCount = 0;
    
    for(int i = 0; i < lottos.size(); i++){
        
        if(lottos[i] == 0){
            zeroCount++;
            for(int j= 0; j < win_nums.size(); j ++){
                auto x = find(lottos.begin(),lottos.end(),win_nums[j]);
                if(x == lottos.end()){
                    lottos[i] = win_nums[j];
                }
            }
        } 
        
        if((find(win_nums.begin(),win_nums.end(),lottos[i])) != win_nums.end()){
            count++;
        }        
    }
    
    switch(count){
        case 2: answer.push_back(5); break;
        case 3: answer.push_back(4); break;
        case 4: answer.push_back(3); break;
        case 5: answer.push_back(2); break;
        case 6: answer.push_back(1); break;
        default:answer.push_back(6); break;
    }
        
    switch(count-zeroCount){
        case 2: answer.push_back(5); break;
        case 3: answer.push_back(4); break;
        case 4: answer.push_back(3); break;
        case 5: answer.push_back(2); break;
        case 6: answer.push_back(1); break;
        default:answer.push_back(6); break;
    }
    
    return answer;
}