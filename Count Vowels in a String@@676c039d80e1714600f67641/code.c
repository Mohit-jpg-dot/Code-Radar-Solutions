#include<stdio.h>
#include<string.h>
int main(){
    char a[100];int b,count = 0;
    b = strlen(a)
    fgets(a,100,stdin);
    for(int i = 0;i<b;i++){
        if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u'){
            count++;
    }
    }
    printf("%d\n",count);
    return 0;
}