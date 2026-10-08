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
    printf("%d\n",number);

    int x = 2, y = 6, z = 10;
    printf("%d\n", x+y+z);

    int length = 10;
    int width = 6;
    int area;
    area = length * width;
    printf("Length is %d\n", length);
    printf("Width is %d\n", width);
    printf("Area of the rectangle is %d\n", area);
    return 0;
}
