#include <stdio.h>

void check(int num){
	if (num & 1){
        printf("The entered number is odd.\n");
    }
	else{
        printf("The entered number is even.\n");
    }
}
int main(){
	int num;
    printf("Enter the number: ");
    scanf("%i", &num);
	check(num);
    return 0;
}