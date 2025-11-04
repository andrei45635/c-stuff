#include <stdio.h>

int main() {


    int a = 0;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Your number is: %x in hexadecimal, %o in octal and %d in int\n", a, a, a);


    return 0;

}
