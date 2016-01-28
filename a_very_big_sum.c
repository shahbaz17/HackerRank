#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    long long int arr[n];
    for(int i = 0; i < n; i++){
       scanf("%lld",&arr[i]);
    }
    long long int sum=0;
    for(int i =0; i < n; i++){
        sum = sum + arr[i];
    }
    printf("%lld",sum);
    return 0;
}