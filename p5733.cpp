#include<stdio.h>
#include<string.h>
int main (){
	char s[101];
	scanf("%s",&s);
	int length=strlen(s);
	for (int i=0;i<length;i++){
	if(s[i]>='a'&&s[i]<='z')
        printf("%c",s[i]-'a'+'A');
        else
        printf("%c",s[i]);
    }
	return 0;
}
