#include<stdio.h>
#include<string.h>
int main (){
	char a[280];
	scanf("%s",a);
	int l=strlen(a);
	int boy=0;
	int girl =0;
	for (int i=0;i<l;i++){
		if (a[i]=='b' || a[i+1]=='o' || a[i+2]=='y'){
			boy++;
		}
			if (a[i]=='g' || a[i+1]=='i' || a[i+2]=='r'||
			 a[i+3]=='l'){
			girl++;
		}
	}
	printf("%d\n",boy);
	printf("%d\n",girl);
	return 0;
	
	
	}
