#include<stdio.h>
int main() {
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++) {    
        if (arr[i] < 0) {
            printf("%d\n", arr[i]);
        }
    }
}