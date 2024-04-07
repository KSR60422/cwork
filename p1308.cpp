#include <stdio.h>
#include <string.h>
#include <ctype.h>
const	int space=0;
const	int letter=-1;
const	int word=1;//这里我用的数组 
	void strlower (char a[]) {
    for(int i = 0; a[i]; i ++ ) {
        if(isupper(a[i])) a[i] = tolower(a[i]);
    }
}
int main(){

	char a[1000001],word [20];
	int ans=0;
	int ans2 =-1;
	int state=0;
	int i=0;
	gets(word);
	gets(a);
	strlower(a);
    strlower(word);
    int len = strlen( word );
    for (i=0;a[i];i++){
    	switch( state){
    		case space:
    		if (a[i]==word[0])state=1;
    		else if(a[i] == ' ') state = space;
    		else state = letter;
    		break;
    		case letter:
    			if(a[i] == ' ') state =space;
    			break;
    		default :
    			if ( state <len){
    				if(a[i] == ' ') state = space;
    				else if(a[i] == word[state]) state ++ ;
    				else state = letter;
				}
				else if (state == len )
				 {	
                    if(a[i] == ' ') 
                    state = space;
                    if(ans2 == -1)
                    ans2 = i - len;
                    ans ++;
		}
			 else state = letter;
	}

}

 if (state == len) {
        ans ++ ;
        if(ans2 == -1)
            ans2 = i - 1 - len;
    }
    if(ans2 == -1) printf("-1");
    else printf("%d %d", ans, ans2);
   return 0;
}

