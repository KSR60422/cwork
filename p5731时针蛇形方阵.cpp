#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int matrix[9][9];
	for (int i = 0; i < 9; i++) {
        for (int j = 0; j <9; j++) {
	matrix[i][j]=1;
	}
}
for (int i = 0; i < n; i++) {
        for (int j = n; j <9; j++) {
	matrix[i][j]=0;
}
}
	int x=0;int y=0; 
	 
	for (int i=1;i<=n*n;){
		while(y+1<n&&!matrix[x][y+1])matrix[x][++y]=++i;
        while(x+1<n&&!matrix[x+1][y])matrix[++x][y]=++i;
        while(y>1&&!matrix[x][y-1])matrix[x][--y]=++i;
        while(x>1&&!matrix[x-1][y])matrix[--x][y]=++i;
	}

	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
                printf("%3d",matrix[i][j]); 
            
              
          
        }
        printf("\n");
    }
return 0;
	
}


