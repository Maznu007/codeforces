#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);
        if (N == 0) { // Special case when the number is 0
            printf("0\n");
            continue; // Skip to the next test case
        }
        int first_digit = 1;
        while(N>0){
            if (!first_digit){
                printf(" ");
            }
            printf("%d",N%10);
            N/=10;
            first_digit = 0;
        }
        printf("\n");
    }

    return 0;}