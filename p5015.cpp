#include<stdio.h>
#include<string.h>
	char s;
	int k,n,m;
	
int main (){
	s=getchar();
	while(s!='\n')
{
	if(s!=' ')
	 ++n;
	s=getchar(); 
}

printf("%d",n);
return 0;
}
