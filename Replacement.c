#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for (int i = 0; i < n; i++) {
        if (arr[i]>0){
            arr[i]=1;
        } else if(arr[i]<0){
            arr[i]= 2;
        } else{
            arr[i] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" "); }}
return 0;}