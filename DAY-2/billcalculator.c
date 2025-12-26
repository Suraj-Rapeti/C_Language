#include <stdio.h>

int main() {
    char food;
    int quantity;
    int total;
    printf("Food Menu:\n");
    printf("b - Burger \nf - French Fries \np - Pizza \ns - Sandwiches \n");
    printf("Enter food type (b/f/p/s): ");
    scanf(" %c", &food);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch(food) {
        case 'b':
            total = 200 * quantity;
            break;
        case 'f':
            total = 50 * quantity;
            break;
        case 'p':
            total = 500 * quantity;
            break;
        case 's':
            total = 150 * quantity;
            break;
        default:
            printf("Invalid food choice");
            return 0;
    }

    printf("Total charges = Rs. %d", total);

    return 0;
}
