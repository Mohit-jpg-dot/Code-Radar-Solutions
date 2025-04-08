#include<stdio.h>
int main(){
    char a[100],count = 0;
    getchar();
    fgets(a,100,stdin);
    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u'){
        count++;
    }
    printf("%d\n",count);
    return 0;
}