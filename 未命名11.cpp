#include<stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int matrix[9][9];

    // 初始化矩阵
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            matrix[i][j] = 0;
        }
    }

    int x = 0, y = 0;
    matrix[0][0] = 1;

    for (int i = 2; i <= n * n; i++) {
        // 向右移动
        while (y + 1 < n && !matrix[x][y + 1]) {
            matrix[x][++y] = i;
        }
        // 向下移动
        while (x + 1 < n && !matrix[x + 1][y]) {
            matrix[++x][y] = i;
        }
        // 向左移动
        while (y - 1 >= 0 && !matrix[x][y - 1]) {
            matrix[x][--y] = i;
        }
        // 向上移动
        while (x - 1 >= 0 && !matrix[x - 1][y]) {
            matrix[--x][y] = i;
        }
    }

    // 输出矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

