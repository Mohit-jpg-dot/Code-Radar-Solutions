#include <stdio.h>
#include <math.h>
int binaryToDecimal(int n,int power) {
    if (n==0)  
        return 0;
    int a=n%10;  
    return a*pow(2,power)+binaryToDecimal(n/10,power+1);
}
int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("Decimal equivalent: %d\n",binaryToDecimal(n,0));
    return 0;
}