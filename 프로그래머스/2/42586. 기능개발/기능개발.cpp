#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> pro, vector<int> speed) {
    vector<int> answer;
    vector<int> left;
    for(int i = 0; i < pro.size(); i++){
        int p = (100 - pro[i]) / speed[i];
        int m = (100 - pro[i]) % speed[i];
        if(m > 0) p++;
        left.push_back(p);
    }
    int max = left[0], count = 1;
    for(int i = 1; i < left.size(); i++){
        if(max >= left[i]){
            count++;
        }else{
            answer.push_back(count);
            max = left[i];
            count = 1;
        }
    }
    answer.push_back(count);
    return answer;
}