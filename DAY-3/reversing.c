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
    
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
}