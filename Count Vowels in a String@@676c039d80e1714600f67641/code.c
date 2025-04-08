#include<stdio.h>
#include<ctype.h>
int main(){
    char a[100];
    int count = 0;
    fgets(a,100,stdin);
    for(int i = 0;a[i]!='\0';i++){
        char ch = tolower(a[i]);
        if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'){
            count++;
    }
    }
    printf("%d\n",count);
    return 0;
}