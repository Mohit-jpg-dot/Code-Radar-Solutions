#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < a; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == a - 1 || arr[i] >= arr[i + 1])) { 
            printf("%d\n", arr[i]);
            return 0;  
        }
    }
    int allSame = 1; 
    for (int i = 1; i < a; i++) {
        if (arr[i] != arr[i]) {
            allSame = 0;
            break;
        }
    }
    if (allSame) {
        printf("-1\n");
        return 0;
    }
    return 0;
}