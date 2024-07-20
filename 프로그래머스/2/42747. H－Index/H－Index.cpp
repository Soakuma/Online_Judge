#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> c) {
    int answer = 0, tmp = 1, j = c.size();
    sort(c.rbegin(), c.rend());
    for(int i = c.size() - 1; 0 <= i; i--){
        if(c[i] >= i + 1){
            return i + 1;
        }
    }
}