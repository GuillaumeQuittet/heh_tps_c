#include <stdio.h>
#include "ex6.h"

int main()
{
    customer tableCustomer[20];
    int numberOfCustomer = 0;
    int referenceAge = 0;
    while(numberOfCustomer < 1 || numberOfCustomer > 20)
    {
        printf("Enter the number of client (max 20): ");
        scanf("%d", &numberOfCustomer);
    }
    for(int i = 1; i <= numberOfCustomer; i++)
    {
        printf("Enter the name of the %d person: ", i);
        scanf("%s", tableCustomer[i-1].name);
        printf("Enter the first name of the %d person: ", i);
        scanf("%s", tableCustomer[i-1].firstName);
        printf("Enter the age of the %d person: ", i);
        scanf("%d", &tableCustomer[i-1].age);
        printf("Enter the gender of the %d person: ", i);
        scanf("%s", &tableCustomer[i-1].gender);
    }
    printf("\nEnter the reference age: ");
    scanf("%d", &referenceAge);
    printf("\nThe people who are %d or higher are:\n", referenceAge);
    for(int i = 0; i < numberOfCustomer; i++)
    {
        if(tableCustomer[i].age >= referenceAge)
            printf("%s %s %d %c\n", tableCustomer[i].name, tableCustomer[i].firstName, tableCustomer[i].age, tableCustomer[i].gender);
    }
    return 0;
}
