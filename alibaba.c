#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    //printf("%d %d %d %d",a,b,c,d);
    int mul = b*c;
    int add = mul+a;
    int sub = mul - a;
    if (d == add || d == sub || 
        d == (a * (b + c)) || 
        d == (a * (b - c)) || 
        d == ((a + b) * c) || 
        d == ((a - b) * c) ||
        d == ((a + b) - c) || 
        d == ((a - b) + c) || 
        d == ((a * b) + c) || 
        d == ((a * b) - c)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}