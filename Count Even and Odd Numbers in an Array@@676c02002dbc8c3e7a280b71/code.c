#include<stdio.h>
int main(){
    int a,count = 0,sum = 0;
    printf("Enter : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",arr[i]);
    }
    for(int i = 0;i<a;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            sum++;
        }
    }
    printf("%d %d",count,sum);
    return 0;
}