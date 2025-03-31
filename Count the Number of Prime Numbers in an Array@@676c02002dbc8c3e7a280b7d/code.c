#include <stdio.h>
int main() {
    int a, count = 0;
    scanf("%d", &a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if (a < 2){
        printf("NOT PRIME");
    }  
    else{
        for (int i = 2; i * i <= a; i++) {  
        if (a % arr[i] != 0) {
            count++;
            return 0;
        }
    }
    printf("%d",count);
    }
    return 0;
}