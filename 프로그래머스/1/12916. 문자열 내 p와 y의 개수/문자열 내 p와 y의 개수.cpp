#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    
    for(char i =0; i<s.size(); i++){
        if(s[i] == 'p'|| s[i] == 'P') ++p;
        else if(s[i] == 'y' || s[i] == 'Y') ++y;
    }

    return (p != y) ? false : true;
}