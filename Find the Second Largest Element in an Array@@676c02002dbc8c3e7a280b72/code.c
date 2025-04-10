#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    for(int i = 0;i<a;i++){
        if(arr[i]>max){
            max = arr[i-1];
    }   else if(max < 0){
        int min = 0;
        for(int i = 0;i<a;i++){
            if(arr[i]<min){
                min = arr[i+1];
                printf("%d",min);
                break;
        }
    }
    }
        else{
            n = -1;
        }
    }
    if(n == 1){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
    return 0;
}
