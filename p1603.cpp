#include<stdio.h>
#include<string.h>
void insert (unsigned long long int b[],int len){
	int temp=0;
	int j=0;
	
	for (int i=1;i<len;i++){
		temp=b[i];
		for ( j=i-1;j>=0 && temp <b[j];j-- )	{
		
				b[j+1]=b[j];
				b[j]=temp; 
				}
			
	}
} 
char dic[30][20]={"zero","one","two","three","four","five",
"six","seven","eight","nine","ten","eleven",
"twelve", "thirteen", "fourteen", "fifteen", 
"sixteen", "seventeen", "eighteen", "nineteen", 
"twenty","a","both","another","first","second","third"};
int di[30]={0,1,4,9,16,25,36,49,64,
81,00,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
unsigned long long int a[10]={0};
int k=0;int flag=0;
int key=0;

int main (){
	char s[201];
	for (int i=0;i<6;i++){
		scanf("%s",&s);
		for (int j=0; j<26;j++){
			if(!strcmp(s,dic[j]))
               {
                    a[k++]=di[j];
                    flag=1;
                    break;
               }
		}
		
	}
insert (a,10);
	if (flag==0){
	printf("0");
	}
	else {
		for (int i=0;i<10;i++){
		 if(key)
           {
                printf("%.2d",a[i]);
           }
           else
           {
                if(a[i]!=0)
                { 
                     printf("%d",a[i]);
                     key=1;
                }
            }
	

}
	}

	
	
	return 0;
}
