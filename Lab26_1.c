#include <stdio.h>

int main() {
    int num_rows;
	int num=1;
	
    printf("Enter the number of rows: ");
    scanf("%i", &num_rows);
    for (int i = 1; i <= num_rows; i++) {
		if (i % 2 == 1) {
            num = 1;
        }
		else {
            num = 0;
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
			num = 1 - num;
        }
        printf("\n");
    }
    return 0;
}