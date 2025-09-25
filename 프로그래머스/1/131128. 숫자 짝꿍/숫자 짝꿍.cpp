#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
	string answer = "";
	map<char,int> map;

	for (char c : X)
	{
		map[c]++;
	}
	for (char c : Y)
	{
		if (map[c] != 0)
		{
			answer += c;
			map[c]--;
		}
	}

	if (answer.empty()) return "-1";
	if (answer[0] == '0') return "0";

	sort(answer.begin(), answer.end(), greater<char>());
	
	return answer;
	
}