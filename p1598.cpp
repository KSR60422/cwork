#include<stdio.h>
#include<string.h>
int main(){
	int num[26]={0};
	char a[120];
	int len =0;
	int maxm=0;
	for (int i=0;i<4;i++){
		gets(a);
		len =strlen(a);
		for (int j=0;j<len;j++){
			if (a[j]>='A'&&a[j]<='Z'){
			num[(int)a[j]-65]++;	
			}
		}
	}
	for (int i=0;i<26;i++){
		if (num[i]>maxm){
			maxm=num[i];
		}
	}
	for (int i=maxm;i>0;i--){
		for (int j=0;j<26;j++){
			if (num[j]>=i){
				printf("* ");
			}
			else {
				printf("  ");	
			}
		}
		printf("\n");
	}
	for(int i=0;i<26;i++)printf("%c ",i+'A');
return 0;
}
