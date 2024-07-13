#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    for(int i = 0; i < s.size(); ++i){
        vector<char> c;
        bool o = 1;
        for(int j = i; j < i + s.size(); ++j){
            int idx = j % s.size();
            if(s[idx] == '(' || s[idx] == '{' || s[idx] == '['){
                c.push_back(s[idx]);
            }
            else{
                if(c.empty() || (s[idx] == ')' && c.back() != '(') || (s[idx] == '}' && c.back() != '{') || (s[idx] == ']' && c.back() != '[')){
                    o = 0;
                    break;
                }
                c.pop_back();
            }
        }
        if(o && c.empty()){
            answer++;
        }
    }
    return answer;
}