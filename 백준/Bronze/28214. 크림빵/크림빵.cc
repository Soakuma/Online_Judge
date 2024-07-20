#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n, k, p;
  int arr[50][50] = {};
  cin >> n >> k >> p;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < k; j++){
      cin >> arr[i][j];
    }
  }
  int sell = 0;
  for (int i = 0; i < n; i++){
    int count = 0;
    for (int j = 0; j < k; j++){
      if (arr[i][j] == 0) {
        count++;
      }
    }
    if (count < p){
      sell++;
    }
  }
  cout << sell;
}