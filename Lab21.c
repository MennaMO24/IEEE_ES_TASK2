#include <stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%i",&num);
    printf("Cube of numbers from 1 to %i:\n",num);
    for (int i = 1; i <= num; i++) {
        printf("Cube of %i = %i\n",i,i*i*i);
    }
    return 0;
}