#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(string s : babbling){
        int x = 0;
        bool y = true;
        for (int i = 0; i < s.size(); i++){
            if(s.substr(i,3) == "aya" && x != 1) {x = 1; i += 2;}
            else if(s.substr(i,2) == "ye" && x != 2) {x = 2; i += 1;}
            else if(s.substr(i,3) == "woo" && x != 3) {x = 3; i += 2;}
            else if(s.substr(i,2) == "ma" && x != 4) {x = 4; i += 1;}
            else{y = false; break;}
        }
        if(y == true) answer++;
    }
    return answer;
}