#include<stdio.h>
void Bubblesort(int arr[],int len) {
    for (size_t i = 0; i < len-1; i++)
    {
        for (size_t j=0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 8,6,7,5,2,3,1,10,9,4 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Bubblesort(arr, len);
    for (size_t i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
