#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int result = 0;
    
    
    do
    {
        result += n % 10;
        n /= 10;
    }while(n != 0);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << result << endl;

    return answer = result;
}