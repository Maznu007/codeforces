#include <stdio.h>
#include <ctype.h>
int main()
{
    char X;
    scanf("%c",&X);
    if (islower(X)){
        printf("%c\n",toupper(X));
    } else if (isupper(X)){
        printf("%c\n",tolower(X));
        
    }
    return 0;
}
