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
    for (int i = 1; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == a - 1 || arr[i] >= arr[i + 1])) {
            max = arr[i];
        }
        break;
    }
    printf("%d\n",max);
}