#include <string>
#include <vector>
#include <iostream>

using namespace std;

int count(int n){
    int a = 1;
    for(int i = 2; i * i <= n; ++i){
        int x=0;
        while(n%i == 0){
            x ++;
            n /= i;
        }
        a *= (x + 1);
    }
    if(n > 1){
        a *= (1+1);
    }
    return a;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1; i <= number; i++){
        int temp = count(i);
        answer += (temp > limit ? power : temp);
    }
    
    return answer;
}