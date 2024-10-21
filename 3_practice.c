#include <stdio.h>
#include <stdlib.h>


int main(){
    int *ptr = (int*)malloc(4*5);
    // scanf("%d, %d, %d, %d, %d",&ptr[0],&ptr[1],&ptr[2],&ptr[3],&ptr[4]);
    scanf("%d %d %d %d %d",ptr+0,ptr+1,ptr+2,ptr+3,ptr+4);
    for(int i =0; i<=4; i+=2){                              
        printf("%d ",*(ptr+i));
        
    }

}