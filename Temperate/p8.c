#include <stdio.h>
 main() {
    int choice, quantity;
    float total_cost = 0;

    printf("Welcome to the Restaurant!\n");
    printf("Press 1 for Dosa\n");
    printf("Press 2 for Burger\n");
    printf("Press 3 for Dounts\n");
    printf("Press 4 for Cheesecake\n");
    printf("Press 5 for Pizza\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Dosa - Rs. 200 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 200 * quantity;
            break;
        case 2:
            printf("Burger - Rs. 150 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 150 * quantity;
            break;
        case 3:
            printf("Dounts - Rs. 130 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 130 * quantity;
            break;
        case 4:
            printf("Cheesecake - Rs. 210 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 210 * quantity;
            break;
        case 5:
            printf("pizza - Rs. 300 per plate\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            total_cost += 300 * quantity;
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }

    printf("Total cost: Rs. %.2f\n", total_cost);
    printf("Thank you for visiting our Restaurant!\n");

}
