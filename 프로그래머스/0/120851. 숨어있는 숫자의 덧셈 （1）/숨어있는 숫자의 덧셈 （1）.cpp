#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto c : my_string){
        if(48 <= c and c <= 57){
            answer += c-48;
        }
    }
    return answer;
}