#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int> list(n+1,1);
	for (int i : lost)
	{
		list[i]--;
	}
	for (int i : reserve)
	{
		list[i]++;
	}
	
	for (int i = 1; i <= n; ++i) {
		if (list[i] == 0) {
			if (i > 1 && list[i - 1] == 2)      
            { 
                list[i - 1]--; list[i]++; 
            }
			else if (i < n && list[i + 1] == 2) 
            { 
                list[i + 1]--; list[i]++; 
            }
		}
	}


	for (int i = 1; i <= n; i++)
	{
		if (list[i] >= 1)
		{
			answer++;
		}
	}

	return answer;
}