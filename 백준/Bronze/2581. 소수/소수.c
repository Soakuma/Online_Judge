#include <stdio.h>
#include <stdbool.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0;
    int min = -1;

    for (int i = m; i <= n; i++){
        bool prime = true;
        if (i <= 1) {
            prime = false;
        } else {
            for (int j = 2; j * j <= i; j++){
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if (prime) {
            sum += i;
            if (min == -1 || i < min) {
                  min = i;
            }
        }
    }
    if (min == -1) {
        printf("-1");
    } else {
        printf("%d\n", sum);
        printf("%d", min);
    }
}