#include <stdio.h>

int main() {
    char name = 'A';
    printf("Hello%c\n", name);
    float Mynum = 90.9;
    int today = 20;
    printf("%d\n", today);
    printf("%c\n", name);
    printf("%f\n", Mynum);

    printf("this is my Number: %d and this is my Letter: %c\n", today, name);

    int number = 10;
    int otherNumber = 15;
    number = otherNumber + number;
    printf("%d",number);
    return 0;
}
