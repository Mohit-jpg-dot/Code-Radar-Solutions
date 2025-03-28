#include<stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);}
    for(int j = 1;j<a;j++){
        for(int k=j;k>=1;k--){
            if(arr[j]==arr[k]){
                count++;
                break
            }
        }
    }
    if(count!=1){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}