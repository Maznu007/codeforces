#include <stdio.h>

int main()
{
    int N;
    int maxx = 0;
    scanf("%d",&N);
    for (int i = 0; i<N; i++){
        int num;
        scanf("%d",&num);
        if (num>maxx){
            maxx=num;
        }
        }
    printf("%d",maxx);
    
    return 0;
}
