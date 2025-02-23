/*Write a program to input n numbers on command line argument and 
calculate maximum of them.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide the number of inputs you will enter.\n");
        return 1;
    }

    int n = atoi(argv[1]);  
    if (n <= 0) {
        printf("Please provide a positive number for the count of inputs.\n");
        return 1;
    }

    double num, max;
    printf("Enter number 1: ");
    scanf("%lf", &num);
    max = num;  
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        if (num > max) {
            max = num;  
        }
    }

    printf("The maximum number is: %.2f\n", max);

    return 0;
}
