#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    if (n >= 10){
        k -= n / 10;
    }
    k *= 2000;
    n *= 12000;
    

    return answer = k+n;
}