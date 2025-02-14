#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    long long arr[n], sum=0;
    for (int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    printf("%lld\n",llabs(sum));
    return 0;
}