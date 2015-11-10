#include <stdio.h>

int main()
{
    FILE *textFile;
    textFile = fopen("numbers2.txt", "r");
    char line[256];
    if (textFile == NULL)
    {
        printf("[ERROR] Can't open the file.\n");
        return 0;
    }
    else
    {
        while(fgets(line, sizeof(line), textFile) != NULL)
        {
            printf("%s", line);
        }
        fclose(textFile);
    }
    return 0;
}
