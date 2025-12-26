#include<stdio.h>
int main() {
    int size; 
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int i, j;

    for(i=0; i<size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++) {
        for(j=i+1; j<size; j++) {
            if(arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;
            }
        } 
            if(i==j){
                printf("%d\n", arr[i]);
        }
    }
}