#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++){
        char test = s[i];
        
        if(test == ' '){
            answer += ' ';
            continue;
        }else{
            if(test >= 'A' && test <= 'Z')
            {
            test += n - 26; 
                
            if(test < 'A') 
                answer += test + 26;
            else answer += test;
            }
            else if(test >= 'a' && test <= 'z')
            {
            test += n - 26; 
                
            if(test < 'a') 
                answer += test + 26;
            else answer += test;
            }
        }
    }
    return answer;
}