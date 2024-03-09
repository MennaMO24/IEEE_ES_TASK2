#include <stdio.h>

int square_num(int num){
	int square = num * num;
	return square;
}
int main() {
	int num;
    printf("Enter the number: ");
    scanf("%i", &num);
	printf("The square of %i is: %i",num,square_num(num));
    return 0;
}