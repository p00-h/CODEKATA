#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    int answer = -1;
    unordered_map<int,int> arrayMap;
    int max = 0;
    int countMax = 0;
    
    
    for(int num : array){
        ++arrayMap[num];
        if(arrayMap[num] > max){
            max = arrayMap[num];
            answer = num;
            countMax = 1;
        }else if(arrayMap[num] == max && num != answer){
                countMax = 2;
        }
    }
    
    return countMax > 1 ? -1 : answer;
}