#include <stdio.h>
main(){
    char email[40];
    char password[40];

    // Desired email and password for comparison
    char desired_email[] = "admin@gmail.com";
    char desired_password[] = "123456";

    printf("Enter your email: ");
    scanf("%s",email);

    printf("Enter your password: ");
    scanf("%s",password);

    // Compare entered email and password with desired ones
    if (strcmp(email, desired_email) == 0 && strcmp(password, desired_password) == 0) {
        printf("LOGIN SUCCESSFUL...\n");
    } else {
        printf("LOGIN FAILED. INVALID CREDENTIALS...\n");
    }


}
