#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    getchar();
    fgets(a,100,stdin);
    int n = strlen(a)+1;
    if(strcmp(a, "\n") == 0){
        printf("0");
    }
    else{
        a[strcspn(a, "\n")] = '\0';
        printf("%d",n);
    }
    return 0;
}