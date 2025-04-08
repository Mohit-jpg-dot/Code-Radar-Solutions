#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    getchar();
    fgets(a,100,stdin);
    int n = strlen(a);
    printf("%d",n);
    return 0;
}