#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string tmp = "";
    int total = 0, zero = 0;
    while(s != "1"){
        total++;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                tmp += s[i];
            }
            else{
                zero++;
            }
            
        }
        int tmpl = tmp.size();
        tmp.clear();
        s.clear();
        while(tmpl >= 1){
            s.insert(0, to_string(tmpl % 2));
            tmpl /= 2;
        }
    }
    answer.push_back(total);
    answer.push_back(zero);
    return answer;
}