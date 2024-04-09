#include <stdio.h>

int Check(int bingo[][5]) {
    int count = 0;

    for (int i = 0; i < 5; ++i) {
        int r_count = 0, c_count = 0;
        for (int j = 0; j < 5; ++j) {
            if (bingo[i][j] == 0) r_count++;
            if (bingo[j][i] == 0) c_count++;
        }
        if (r_count == 5) count++;
        if (c_count == 5) count++;
    }
    int count1 = 0, count2 = 0;
    for (int i = 0; i < 5; ++i) {
        if (bingo[i][i] == 0) count1++;
        if (bingo[i][4 - i] == 0) count2++;
    }
    if (count1 == 5) count++;
    if (count2 == 5) count++;

    return count;
}

int main() {
    int bingo[5][5];
    int number[11][11];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &bingo[i][j]);
        }
    }
    for (int i = 0; i < 11; ++i) {
        for (int j = 0; j < 11; ++j) {
              number[i][j] = -1;
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &number[i][j]);
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int current = number[i][j];
            for (int k = 0; k < 5; ++k) {
                for (int l = 0; l < 5; ++l) {
                    if (bingo[k][l] == current) {
                        bingo[k][l] = 0;
                    }
                }
            }
            int bingo_count = Check(bingo);
            if (bingo_count >= 3) {
                printf("%d", i * 5 + j + 1);
                return 0;
            }
        }
    }
}