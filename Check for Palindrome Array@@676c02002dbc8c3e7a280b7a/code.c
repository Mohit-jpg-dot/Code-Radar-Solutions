#include<stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<=a;i++){
        scanf("%d",&arr[i]);}
    for(int j = 0;j<a;j++){
        for(int k=j;k>=1;k--){
            if(arr[j]==arr[k]){
                count++;
            }else{
                printf("NO");
            }
        }
    }
    if(count%a==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}