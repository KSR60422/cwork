#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int matrix[9][9];
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			matrix[i][j]=0;
		}
	}
	int num=1;
	int left=0;int right=n-1;
	int top=0;int bottom=n-1;
while (num <= n * n) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }
	
		for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%3d",	matrix[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
