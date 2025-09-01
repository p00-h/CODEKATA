#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(string s) {
    unordered_map<int, string> map;
    
    map[0] = "zero";
    map[1] = "one";
    map[2] = "two";
    map[3] = "three";
    map[4] = "four";
    map[5] = "five";
    map[6] = "six";
    map[7] = "seven";
    map[8] = "eight";
    map[9] = "nine";
    
    for(int i = 0; i < 10; i++){
        int it = 0;
        while((it = s.find(map[i])) != string::npos){
            s.replace(it,map[i].length(),to_string(i));
        }
    }
    
    return stoi(s);
}