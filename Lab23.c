#include <stdio.h>

int main() {
	int num=0;
    int num_rows;

    printf("Enter number of rows: ");
    scanf("%i",&num_rows);
    for (int i = 1;i <= num_rows;i++) {
        for (int j = 1;j <= i;j++) {
            printf("%i ",num+=1);
        }
        printf("\n");
    }
    return 0;
}