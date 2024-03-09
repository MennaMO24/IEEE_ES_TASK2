#include <stdio.h>

int main() {
	int num;
	float sum=0;
	
    printf("Input the number of terms: ");
    scanf("%i",&num);
	printf("Harmonic series is:\n");
    for (int i = 1;i <= num;i++){
		printf("1/%i + ",i);
		sum+=1.0/i;
	}
	printf("\nSum of Series upto %i terms: %.6f",num,sum);
    return 0;
}