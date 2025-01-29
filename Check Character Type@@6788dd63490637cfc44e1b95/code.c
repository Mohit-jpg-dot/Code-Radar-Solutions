#include <stdio.h>
int main() {
    char a;
    char c[100] = {'a','e','i','o','u'};
    scanf("%c",&a);
    if(a==c){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}