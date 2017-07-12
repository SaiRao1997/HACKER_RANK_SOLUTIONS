#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    float pos,neg,zero;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
      if(arr[arr_i]>0){
          pos=pos+1;
      }else if(arr[arr_i]<0){
          neg=neg+1;
      }else
          zero=zero+1; 
    }
    printf("%f\n%f\n%f\n",pos/n,neg/n,zero/n); 
    return 0;
}
