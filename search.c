#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    long long arr[n];
    for (int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        
    }
    long long m;
    scanf("%lld",&m);
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i]==m){
            found = i;
            break;
        
        }
        }
    printf("%d\n",found);
    return 0;
}