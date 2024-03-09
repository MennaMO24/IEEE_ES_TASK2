#include <stdio.h>

int main() {
    int num;
	int sum=0;

    printf("Enter the number of terms: ");
    scanf("%i", &num);
    printf("Natural numbers are:\n");
    for (int i=1;i<=num;i++) {
        printf("%i ",i);
        sum += i;
    }
    printf("\nSum of natural numbers is: %i",sum);
    return 0;
}