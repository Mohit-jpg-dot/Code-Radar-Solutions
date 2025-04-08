#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    if(arr[i]>max){
        max = arr[i];
    }
    printf("%d",max);
    return 0;
}
