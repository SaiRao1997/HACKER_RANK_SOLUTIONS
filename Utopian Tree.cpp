#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findTreeheight(int num_cycle){
  
    int count = 1;
    int result = 1;
    if(num_cycle == 0)
        return result;
    while(num_cycle){
        if(count & 1)
            result = result*2;
        else
            result = result + 1;
        count++;
        num_cycle--;
    }
    return result;
}
int main() {

    int test;
    int num;
    scanf("%d",&test);
    while(test--){
      
        scanf("%d",&num);
        printf("%d\n",findTreeheight(num));
    }
    return 0;
}
