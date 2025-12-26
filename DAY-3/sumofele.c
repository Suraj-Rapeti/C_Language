#include<stdio.h>
int main() {
    int size; 
    int arr[size];
    int sum = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    } 

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("\nThe sum of the array elements is: %d\n", sum);

    return 0;
}