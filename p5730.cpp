#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	char  num[110];
	getchar();
	getchar();
	for (int i=0;i<n;i++){
		scanf("%c",&num[i]);
	}
	char a[10][5][4]={"XXX",
	"X.X",
	"X.X",
	"X.X",
	"XXX",
	"..X",
	"..X",
	"..X",
	"..X",
	"..X",
	"XXX",
	"..X",
	"XXX",
	"X..",
	"XXX",
	"XXX",
	"..X",
	"XXX",
	"..X",
	"XXX",
	"X.X",
	"X.X",
	"XXX",
	"..X",
	"..X",
	"XXX",
	"X..",
	"XXX",
	"..X",
	"XXX",
	"XXX",
	"X..",
	"XXX",
	"X.X",
	"XXX",
	"XXX",
	"..X",
	"..X",
	"..X",
	"..X",
	"XXX",
	"X.X",
	"XXX",
	"X.X",
	"XXX",
	"XXX",
	"X.X",
	"XXX",
	"..X",
	"XXX"};
	for (int i=0;i<5;i++){
		for (int j=0;j<n;j++){
			for (int k=0;k<3;k++){
				printf("%c",a[num[j]-48][i][k]);
			}
			if(j!=n-1) {
			printf("%c",'.');
		}
		
		}
		printf("\n");
	}
	
	
	return 0;
	
}
