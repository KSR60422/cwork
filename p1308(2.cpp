#include<stdio.h>
#include<string.h>
#include<ctype.h>
void strlower (char *a) {
	for(int i = 0; a[i]; i ++ ) {
		if(isupper(a[i])) a[i] = tolower(a[i]);
	}
	
}
int main (){
	char word[11];
	int ans=0;
	int pos=-1;
	int flag=0;
	char s[1000001];
	gets(word);
	gets(s);
	strlower(word);
	strlower(s);
	int lens = strlen(word);
	int lenb = strlen(s);
	char *p=s;
	char*q;  //问题就出现在23-25行，将 	q=	strstr(p,word);放到for中间就没有错误
	//不知道是为什么 
	for (;q=	strstr(p,word);){

if( q != NULL
		&& ( q == s || *(q - 1) == ' ') 
		&& ( *(q + lens) == '\0' || *(q + lens) == ' ' ) ) {
			ans ++ ;
			if(flag == 0) {
				flag = 1;
				pos = q - s;
			}
		}
		p=q+lens;
	}
	 if(flag == 1){
	 		printf("%d %d" , ans, pos);
	 }
	
	else {
	printf("%d", pos);
	}
	return 0;
}
