# include <stdio.h>

int main() {
    int countdown = 60;

    while (countdown > 0) {
        printf("no there yet \n%d\n", countdown);
        countdown--;
    }
    printf("Happy new year\n");

    do {
        printf("not there yet %d\n", countdown);
        countdown++;
    } while (countdown < 10);

    int number;

    do {
        printf("Enter a positive number\n");
        scanf("%d",&number);
    } while (number > 0);
}
