#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    getchar();
    fgets(a,100,stdin);
    int n = strlen(a)+1;
    if(a == ""){
        printf("%d",n-1);
    }
    else{
        printf("%d",n);
    }
    return 0;
}