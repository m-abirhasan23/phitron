#include <stdio.h>
#include <string.h>

int main()
{
    const char password[20] = "ABIR HASAN";
    char name[20]; // Change to a character array to store the name
    printf("ENTER YOUR NAME: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove the newline character from fgets input

    if (strcmp(name, password) == 0)
    { // Compare strings using strcmp()
        printf("LOGIN SUCCESSFUL\n");
    }
    else
    {
        printf("LOGIN FAILED\n");
    }

    printf("Your name is: %s\n", name); // Print the entered name
    return 0;
}
