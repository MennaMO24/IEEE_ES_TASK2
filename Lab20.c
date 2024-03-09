#include <stdio.h>

int main() {
	int num[10];
	int sum=0;
	float average;
	
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }
	average = (float)sum / 10;
    printf("Sum of numbers is: %i\n",sum);
	printf("average of numbers is: %.2f",average);
    return 0;
}