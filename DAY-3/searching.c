#include<stdio.h>
int main() {
    int size; 
    int target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    } 

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("\nElement %d found at index %d\n", target, i);
            break;
        }
        if (i == size - 1) {
            printf("\nElement %d not found in the array\n", target);
        }
    }
    return 0;
}