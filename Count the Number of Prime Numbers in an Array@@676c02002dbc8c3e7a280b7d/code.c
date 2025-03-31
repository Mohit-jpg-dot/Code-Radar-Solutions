#include<stdio.h>
int main(){
    int a,count = 0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 2;i*i<=a;i++){
        if(a % arr[i] != 0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}