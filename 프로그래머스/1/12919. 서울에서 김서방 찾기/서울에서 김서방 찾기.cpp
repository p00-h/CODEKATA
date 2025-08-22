#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {

    auto it = find(seoul.begin(),seoul.end(),"Kim");
    
    int idx = static_cast<int>(it - seoul.begin());
    
    return "김서방은 " + to_string(idx) + "에 있다";
}