# include <stdio.h>


int main() {
    char greetings [] = "Hello World";
    printf("%s\n", greetings);

    int i;

    for (i = 0; i < 11; i++) {
        printf("%c\n", greetings[i]);
    }

    char myChar[] = "Volvo";

    int length = sizeof(myChar) / sizeof(myChar[0]);

    for (i = 0; i < length; i++) {
        printf("%c\n", myChar[i]);
    }
}