
	
	
	
	
	
	#include <stdio.h>

int main() {
    int n;
    printf("������һ��������9�������� n��");
    scanf("%d", &n);

    int matrix[9][9] = {0};
    int num = 1;
    int row = 0, col = 0;

    for (int k = 1; k <= n * n; k++) {
        matrix[row][col] = num;
        num++;
        
        if ((col + 1 < n && matrix[row][col + 1] != 0) || (col + 1 >= n && matrix[row + 1][col] != 0)) {
            if (row + 1 < n && matrix[row + 1][col] == 0) {
                row++;
            } else {
                col--;
            }
        } else if (row - 1 >= 0 && matrix[row - 1][col] == 0) {
            row--;
        } else {
            col++;
        }
    }

    // ������η���
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                printf("   "); // ��������ո�
            } else {
                printf("%3d", matrix[i][j]); // ������ֲ�������λ���
            }
        }
        printf("\n");
    }

    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
