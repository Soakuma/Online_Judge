#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, tmp = 0;
    sort(people.begin(), people.end());
    int wa = people.size() - 1;
    while (wa >= tmp){
        if(people[tmp] + people[wa] <= limit){
            tmp++;
        }
        answer++;
        wa--;
    } 
    return answer;
}