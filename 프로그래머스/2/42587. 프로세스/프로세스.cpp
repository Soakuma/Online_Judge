#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> priq;
    queue<pair<int, int> > q;
    for(int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
        priq.push(priorities[i]);
    }
    int count = 1;
    while(true){
        pair<int, int> tmp = q.front();
        q.pop();
        if(tmp.second != priq.top()){
            q.push(tmp);
        }else{
            if(tmp.first == location) {
                answer = count;
                break;
            }
            else{
                count++;
                priq.pop();
            }
        }
    }
    return answer;
}