#include<stdio.h>
#include<string.h>
int main (){
	int n=0;
	scanf("%d",&n);
	char s[51];
	scanf("%s",&s);
	int length=strlen(s);
	for (int i=0;i<length;i++){
		if (s[i]+n<='z'){
			printf("%c",s[i]+n);
		}
		else {
			printf("%c",'a'+s[i]+n-'z'-1);
		}
	}

	return 0;
}
