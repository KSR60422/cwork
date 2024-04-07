#include<stdio.h>
#include<string.h>
int main (){
	char s[201];
	gets(s);

	int len=strlen (s);
	int sum=0;
	for (int i=0;i<len;i++){
		if (s[i]==' '||
		s[i]=='a'||
		s[i]=='d'||
		s[i]=='g'||
		s[i]=='j'||
		s[i]=='m'||
		s[i]=='p'||
		s[i]=='t'||
		s[i]=='w'){
			sum++;
		}
		if (
		s[i]=='b'||
		s[i]=='e'||
		s[i]=='h'||
		s[i]=='k'||
		s[i]=='n'||
		s[i]=='q'||
		s[i]=='u'||
		s[i]=='x'	)
		{
			sum+=2;
			
		}
		if (
		s[i]=='c'||
		s[i]=='f'||
		s[i]=='i'||
		s[i]=='l'||
		s[i]=='o'|| 
		s[i]=='r'||
		s[i]=='v'||
		s[i]=='y'	)
		{
			sum+=3;
			
		}
		if (
			s[i]=='s'||
		s[i]=='z'
		
		){
			sum+=4;
		}
	}
	printf("%d",sum);
	return 0;
}
