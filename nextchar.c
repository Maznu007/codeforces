#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    char next = (c=='z')? 'a' : c+1 ;
    printf("%c",next);

    return 0;
}