#include<stdio.h>
#include<string.h>
//洛谷特性之输入完了会自动再输入eof，用就完了 
int main (){
	char map [210][210];
	int i=0;int j=0;
	int flag=0,r=0,count=0;
	while (scanf("%s",map[r])!=EOF)
{
	r++;
	}	
printf("%d", r);	
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < r; j++)
		{
	if (map[i][j]=='0')
	{
		if (flag){
			printf(" %d", count);
			flag = 0;
			count = 0;
		}
		count++;
	}
	
	else{
		if (!flag){
		printf(" %d", count);
		count = 0;
		flag = 1;	
		}
		count ++;
			}
	
		}
	}
	if (count >0){
		printf(" %d", count); 
	}
	
		return 0;
}
