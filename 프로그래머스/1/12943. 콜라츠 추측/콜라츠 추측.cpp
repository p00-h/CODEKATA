#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = -1;
    long long n = num;
    
    for (int i = 0; i < 500; i++){
        if(n == 1) return i;
        if(n % 2 == 0) n /= 2;
        else n = (n * 3) + 1;
    }
    
    return answer;
}