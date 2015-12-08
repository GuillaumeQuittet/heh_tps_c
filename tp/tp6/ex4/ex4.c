#include <stdio.h>

void menu() {
    printf("Que voulez-vous faire ?\n");
    printf("1) Crypter un string\n");
    printf("2) Decrypter un string\n");
}

void readFile() {
    if(File *fp = fopen("clair.txt", "r")) {
        char buf[1024];
        while(fp = ) {

        }
    }
    fclose("clair.txt");
}

void writeFile() {
    //pass
}

int main() {
    menu();
    return 0;
}
