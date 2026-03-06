


#include <stdio.h>
#include <stdlib.h>

extern int sumArray(const int *arr, long n); 
// extern means the actual function body is in the .s file
// The code will look for it there


int main(int argc, char **argv) {
    FILE *file = fopen(argv[1], "r"); // Opens the file in read mode

    long n;
    fscanf(file, "%ld", &n);

    int *numbersArray = (int *)malloc((size_t)n * sizeof(int));

    for (long i = 0; i < n; i++) {
        fscanf(file, "%d", &numbersArray[i]);
    }
    
    fclose(file);

    int sum = sumArray(numbersArray, n);
    printf("Sum = %d\n", sum);

    free(numbersArray);

    return 0;
}


