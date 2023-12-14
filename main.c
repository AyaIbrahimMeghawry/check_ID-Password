#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID;
    int Password;
    printf("Please Enter Your ID:\n"); //ask the user to enter the ID
    scanf("%d",&ID);
    switch (ID) // check the ID if valid or not
    {
        //ask the user to enter the password if the ID is correct
    case 1234:
        printf("Please Enter Your Password:\n");
        scanf("%d",&Password);
        switch (Password) // check the Password if valid or not
        {
        case 20:
            printf("Welcome Ahmed :)\n");
            break;
        default :
            printf("Invalid Password !!\n");
            break;
        }
        break;
    case 4567:
        printf("Please Enter Your Password:\n");
        scanf("%d",&Password);
        switch (Password)
        {
        case 30:
            printf("Welcome Sara :)\n");
            break;
        default :
            printf("Invalid Password !!\n");
            break;
        }
        break;
    }
    return 0;
}
