#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    getchar();
    fgets(s,100,stdin);
    printf("%d",strlen(s));
    return 0;
}