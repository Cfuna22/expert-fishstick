# include <stdio.h>

int main() {
    int myNumber;

    printf("Type your number here: \n");
    scanf("%d", &myNumber);
    printf("Your number is: %d\n", myNumber);

    char greetings[30];

    printf("Your name is: ");
    scanf("%s", greetings);
    printf("Hello %s", greetings);

    return 0;
}
