#include <stdio.h>
#include <stdlib.h>

// #define MAX_N 1000

int arr[1000 + 1][1000 + 1];
int visited[1000 + 1];
int count = 0;

void dfs(int c, int N) {
  visited[c] = 1;
  count++;
  for (int i = 1; i <= N; i++) {
    if (arr[c][i] == 1 && visited[i] == 0) {
      dfs(i, N);
    }
  }
}

int main() {
  int N, n;
  scanf("%d", &N);
  scanf("%d", &n);

  for (int i = 1; i <= N; i++) {
    visited[i] = 0;
    for (int j = 1; j <= N; j++) {
      arr[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    arr[a][b] = arr[b][a] = 1;
  }

  dfs(1, N);
  printf("%d\n", count - 1);
}