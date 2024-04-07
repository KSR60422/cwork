#include<stdio.h>
#include<string.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main (){
	char s[101];
	int sum[26]={0};
	int maxn=0;
	int minn=111;
	
	scanf("%s",&s);
	int n=strlen(s);
	for (int i=0;i<n;i++){
		sum[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(sum[i]>maxn) maxn=sum[i];
		if(sum[i]>0&&sum[i]<minn) minn=sum[i];
	}
if (isPrime(maxn-minn)){
	printf("Lucky Word\n%d",maxn-minn);
}
else{
	printf("No Answer\n0");
}

	return 0;
}
