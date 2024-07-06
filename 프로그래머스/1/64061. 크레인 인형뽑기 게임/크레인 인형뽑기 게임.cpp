#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> v;
    for(int i : moves){
        int t = i--;
        for(int j = 0; j < board.size(); j++){
            if(board[j][i]){
                t = board[j][i];
                board[j][i] = 0;
                break;
            }
        }
        if(!v.empty() && v.back() == t){
            v.pop_back();
            answer += 2;
        }else if(t){
            v.push_back(t);
        }
    }
    return answer;
}