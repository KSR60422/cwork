#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n) {
    printArray(arr, n); // 输出初始数组状态
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printArray(arr, n); // 输出当前数组状态
    }
}

int main() {
    int arr[] = {1, 5, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("初始数组：");
    printArray(arr, n); // 输出初始数组状态

    insertionSort(arr, n);

    return 0;
}
