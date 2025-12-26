#include<stdio.h>
int main() {
    int size; 
    int arr[100];
    int min, max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\nMinimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}