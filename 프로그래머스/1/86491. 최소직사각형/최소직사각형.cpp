#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w = 0; int h = 0;
    
    for (int i = 0; i < sizes.size(); ++i){
        auto max_Val = max(sizes[i][0],sizes[i][1]);
        auto min_Val = min(sizes[i][0],sizes[i][1]);
        
        w = max(w, max_Val);
        h = max(h, min_Val);
    }
    
    answer = w*h;
    
    return answer;
}