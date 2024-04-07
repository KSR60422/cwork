#include<stdio.h>
#include<string.h>
int main (){
	char s[102];
	gets(s);
    
	gets(s);
	int ans=0;
	 for(int i=0;i<strlen(s)-1;i++)
    {
        if(s[i]=='V' && s[i+1]=='K')
        {
            ans++;
            s[i]='X';
            s[i+1]='X';
        }
    }
	for (int i=0;i<strlen(s)-1;i++){
		if (s[i]!='X' &&s[i]==s[i+1]){
			ans++;
			break;
		}
		}
	
	printf("%d",ans);
	return 0;
}
