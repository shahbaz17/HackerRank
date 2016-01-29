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
    int k=n-1;
    for(int i=0; i < n; i++){
        for(int j=0; j < k; j++){
            printf(" ");
        }
        k--;
        for(int m=0; m < i+1; m++)
            printf("#");
        printf("\n");
    }
    return 0;
}