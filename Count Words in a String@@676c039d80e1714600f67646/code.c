#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int n;
    getchar();
    fgets(a,sizeof(a),stdin);
    n = sizeof(a)/sizeof(a[0]);
    printf("%d",n);
    return 0;
}