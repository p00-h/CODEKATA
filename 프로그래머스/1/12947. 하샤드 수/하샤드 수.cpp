#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int a = x;
    int sum = 0;
    
    while(a > 0){
        sum += a % 10;
        a /= 10;
    }
    
    if(x % sum == 0) return true;
    else return false;
}