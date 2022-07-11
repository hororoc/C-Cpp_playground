#include <stdio.h>
#include <string.h>

void printNoSpace(char *text) {

    // for (int i = 0; i < strlen(text); i++) {
    //     if (text[i] != ' ')
    //         printf("%c", text[i]);
    // }

    int i = 0;

    while (text[i] != '\0') {
        if (text[i] != ' ')
            printf("%c", text[i]);

        i += 1;
    }
}

int main() {
    printNoSpace("Hello, World!\n");
    printNoSpace("My name is Doodle\n");

    return 0;
}