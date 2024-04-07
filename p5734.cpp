#include<stdio.h>
#include<string.h>
	int q;
	int c,x,y;
		int lennew;
		int lenold;
		
	char str [211];
	
int main (){
	scanf("%d",&q);
getchar();
	scanf("%s",str);	
	int type=0;
	for (int i=0;i<q;i++){
		scanf("%d",&type);
		switch (type){
		case 1:
		char str1[211];	
		scanf("%s",str1);
		strcat(str,str1);
		printf("%s\n", str); 
			break;
		case 2:
		 x=0;
		y=0;
			scanf("%d %d",&x,&y);
			char str2[211];	
			str[x+y]=0;
			strcpy(str2, &str[x]);
			strcpy(str, str2);
			printf("%s\n", str);
			break;
		case 3:
			char str3[211];	
			 c=0;
			scanf("%d",&c);
			scanf("%s",str3);
		strcat(str3, &str[c]);
			str[c] = '\0';
			strcat(str, str3);
			printf("%s\n", str);
			break;
		case 4:
			char str4[211];
			scanf("%s",str4);
		char *ptr=	strstr(str,str4);
		if (ptr != NULL){
				printf("%d\n",ptr-str);
		}
			else {
				printf("-1\n");
			}
		
			break;

		}
}
	



return 0;
}
