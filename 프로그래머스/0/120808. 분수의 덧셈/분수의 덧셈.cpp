#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
};

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer , denom;
    
    denom = denom1 * denom2;
    numer = (numer1*denom2) + (numer2*denom1);
    
    int r = gcd(numer,denom);
    
    answer = {numer/r,denom/r};
    
    return answer;
}