#include<stdio.h>
#include<string.h>
int main (){
	int n=0;
	scanf("%d",&n);
	char aname[9],bname[9];
	int a=0,b=0,c=0;
	int a1=0,b1=0,c1=0;
	scanf("%s",aname);
	scanf("%d %d %d",&a,&b,&c);
	
	for (int i=1;i<n;i++){
		scanf("%s",bname);
		scanf("%d %d %d",&a1,&b1,&c1);
		if (a1+b1+c1>a+b+c){
			strcpy(aname,bname);
			a=a1;b=b1;c=c1;
		}
	}
	printf("%s %d %d %d",aname,a,b,c);
	return 0;
	
}
