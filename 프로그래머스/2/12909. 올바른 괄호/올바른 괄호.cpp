#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s){
    stack<char> sta;
    for(auto p : s){
        if(p == '('){
            sta.emplace(p);
        }else{
            if(sta.empty() == true){
                return false;
            }else{
                sta.pop();
            }
        }
    }
    return sta.empty();
}