#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> day = {31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> week = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int x = 5;
    
    for(int i = 0; i < a-1;i++){
        x += day[i];
    }
    x += b - 1;
    answer = week[x%7];
    return answer;
}