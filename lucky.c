#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b = a/10;
    int c = a%10;
    if (c != 0 && b % c == 0) {
        printf("YES");
    } else if (b != 0 && c % b == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}