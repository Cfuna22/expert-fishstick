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

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    return 0;
}
