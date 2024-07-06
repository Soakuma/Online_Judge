#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int scale = brown + yellow;
    for(int i = 3; i <= scale / 2; i++){
        int w = scale / i;
        if(scale % i == 0){
            int count = (w * 2) + (i - 2) * 2;
            if(brown == count && yellow == scale - count) {
                answer.push_back(w);
                answer.push_back(i);
                break;
            }
        }
    }
    
    return answer;
}