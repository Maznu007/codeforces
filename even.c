#include <stdio.h>

int main()
{
    int A;
    int hasEven = 0;
    scanf("%d",&A);
    for(int i =1 ;i<=A;i++){
        //printf("%d\n",i);
        if (i%2==0){
            printf("%d\n",i);
            hasEven = 1;
        }
    }
    if (!hasEven){
        printf("-1\n");
    }
    return 0;
}
