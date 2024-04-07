#include<stdio.h>
#include<string.h>
void reversewo (char  a[],int start ,int end){
	for (int i=end;i>=start;i--){
		printf("%c",a[i]);
	}
}
void reversewi (char  a[],int start ,int end){
	int key=0;
	if (start==end){
		printf("%c",a[start]);
	}
	else {
		for (int i=end;i>=start;i--){
		if (a[i]!='0'||key ==1)
		{
			key=1;
			printf("%c",a[i]);
		}
		
	}
	}

}

int main(){
	char s[21];
	scanf("%s",&s);
	int len=strlen(s);
	int way=1;
	int num=0;
	int reverse=0;
	int flag=0;
	int pos=0;
	char xiaoshu[21];
	
	for (int i=0;i<len;i++){
		if (s[i]=='.'){
			way=2;
			pos=i;
			break;
		}
		if (s[i]=='/'){
			way=3;
			pos=i;
			break;
		}
			if (s[i]=='%'){
			way=4;
			break;
		}
	}
	switch (way){
		case 1:
			{
				if ( len ==1){
				printf("%s",s);
			}
			else {
					reversewi(s,0,len-1);
			}
			}
			
		break;
		case 2:{
				reversewi(s,0,pos-1);
	printf(".");
	int k=0;
		for (int j=len-1;j>pos;j--){
	xiaoshu[k]=s[j];k++;
	}
	int len2=strlen(xiaoshu);
	if (len2==1){
		printf("%c",xiaoshu[0]);
	}
	else{
			while (len2> 0 && xiaoshu[len2- 1] == '0') {
        len2--;
    }xiaoshu[len2] = '\0';
    for (int m=0;m<len2;m++){
    	printf("%c",xiaoshu[m]);
	}
	}

			
		}

    	break;
    	case 3:{
    		
			reversewi(s,0,pos-1);
		printf("/");
		reversewi(s,pos+1,len-1);
		}
    	break;
    	case 4:{
    		
			reversewi(s,0,len-2);
    	printf("%%");
		}
    	
    	break;
    
    
	}
	
return 0;
}
