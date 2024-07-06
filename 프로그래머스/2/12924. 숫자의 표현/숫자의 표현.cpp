#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for (int i = 1; i < n; i++){
        int res = 0, begin = i;
        while (res < n){
            res += begin++;
        }
        if(res == n){
            answer++;
        }
    }
    return answer;
}