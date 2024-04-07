#include <stdio.h>
int main (){

	char  a,b,c,d,e,f,g,h,i,z;
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&z);
	int s=0;
	s=(a-48)+2*(b-48)+3*(c-48)+4*(d-48)+5*(e-48)+6*(f-48)+7*(g-48)+8*(h-48)+9*(i-48);
	int r=s%11;
	char x='a';
	if (r<10){
		x=r+48;
	}
	else {
		x='X';
	}
	if (x==z){
		printf("Right");
	}
	else{
		printf("%c-%c%c%c-%c%c%c%c%c-%c",a,b,c,d,e,f,g,h,i,x);
	}
return 0;
}

