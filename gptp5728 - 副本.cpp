#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int **scores = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        scores[i] = (int *)malloc(3 * sizeof(int));
        scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff_c = abs(scores[i][0] - scores[j][0]);
            int diff_m = abs(scores[i][1] - scores[j][1]);
            int diff_e = abs(scores[i][2] - scores[j][2]);
            int total_diff = diff_c + diff_m + diff_e;

            if (diff_c <= 5 && diff_m <= 5 && diff_e <= 5 && total_diff <= 10) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    for (int i = 0; i < n; i++) {
        free(scores[i]);
    }
    free(scores);

    return 0;
}
