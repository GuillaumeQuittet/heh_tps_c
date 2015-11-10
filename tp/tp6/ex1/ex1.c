#include <stdio.h>

int main()
{
    FILE *textFile;
    textFile = fopen("number.txt", "w");
    if (textFile == NULL)
    {
        printf("[ERROR] Can't opening the file.\n");
        return 0;
    }
    float a, b, c;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the third number: ");
    scanf("%f", &c);
    fprintf(textFile, "%f\n%f\n%f\n", a, b, c);
    fclose(textFile);
    printf("The content is writing in a file called numbers.txt\n");
    return 0;
}
