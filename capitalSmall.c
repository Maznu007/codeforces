#include <stdio.h>
#include <ctype.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int min = a;
    if (b<min) min = b;
    if (c<min) min = c;
    int max = a;
    if (b>max) max = b;
    if (c>max) max = c;
    
    printf("%d %d\n",min,max);
    return 0;
}
