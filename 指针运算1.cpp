#include<stdio.h>
int main(){

int ac[]={1,2,3,4,5,6};
int *p1=ac;
int *p2 = &ac[4];
printf("p2-p1=%d\n",p2-p1) ;
printf("p2-p1=%p\n",p2-p1) ;



	return 0;
}

