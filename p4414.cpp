#include <stdio.h>

int main() {
    int A, B, C;
    char order[4];
    int temp;

    
    scanf("%d %d %d", &A, &B, &C);
    getchar(); // 消耗掉输入缓冲区中的换行符

    scanf("%s", order);

 
    if (B < A) {
        temp = A;
        A = B;
        B = temp;
    }
    if (C < A) {
        temp = A;
        A = C;
        C = temp;
    }
    if (C < B) {
        temp = B;
        B = C;
        C = temp;
    }

   
    printf("%d %d %d\n", order[0] == 'A' ? A : order[0] == 'B' ? B : C,
                        order[1] == 'A' ? A : order[1] == 'B' ? B : C,
                        order[2] == 'A' ? A : order[2] == 'B' ? B : C);
                        

    return 0;
}

//chatgpt 唯一真神 
