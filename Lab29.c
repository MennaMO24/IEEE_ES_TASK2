#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    printf("Input a positive number: ");
    scanf("%i", &num);
    if (isPrime(num)){
        printf("The number %i is a prime number.\n",num);
    }
	else{
        printf("The number %i is not a prime number.\n",num);
    }
    return 0;
}