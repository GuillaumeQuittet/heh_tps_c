#include <stdio.h>
#include <math.h>

float nbrChoosed;
int menuChoice;

int main()
{
    printf("Choose a real number : ");
    scanf("%f", &nbrChoosed);
    printf("\n");
    printf("Choose an operating : \n");
    printf("Choice 1: Show the number chose\n");
    printf("Choice 2: Borne down\n");
    printf("Choice 3: Borne up\n");
    printf("Choice 4: Root\n");
    printf("Choice : ");
    scanf("%d", &menuChoice);
    switch(menuChoice)
    {
        case 1:
            printf("%f\n", nbrChoosed);
            break;
        case 2:
            printf("%d\n", (int)nbrChoosed);
            break;
        case 3:
            printf("%f\n", ceil(nbrChoosed));
            break;
        case 4:
            if(nbrChoosed < 0)
                printf("Negative number hasn't root\n");
                break;
            printf("%f\n", sqrt(nbrChoosed));
            break;
        default:
            printf("The choice is not valid.\n");
            break;
    }

}
