# include <stdio.h>

void Today(void);
void myFunction(char name[]);
int main() {
    Today();
    char name[100];
    myFunction(name);
}

void Today() {
    int myAge = 20;
    char names[] = "Abel Sifuna";

    char *ptr = &names[0];
    int *myAgeptr = &myAge;

    printf("%p\n", &ptr);
    printf("%p\n", &myAgeptr);
}

void myFunction (char name[]) {
    printf("enter your name: \n");
    scanf("%s", name);
    printf("Hello %s\n", name);
}

