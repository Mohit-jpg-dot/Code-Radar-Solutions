// #include<stdio.h>
// int main(){
//     int a,count = 0;
//     scanf("%d",&a);
//     int arr[a];
//     for(int i = 0;i<a;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 2;i*i<=a;i++){
//         if(a%arr[i]!=0){
//             count++;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime
    if (num == 2 || num == 3) return 1; // 2 and 3 are prime numbers
    if (num % 2 == 0) return 0; // Even numbers > 2 are not prime
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, count = 0;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count prime numbers
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }

    // Output result
    printf("%d\n", count);

    // Free allocated memory
    free(arr);
    return 0;
}
