#include <stdio.h>



void swap(int *x, int *y);

int main(){

    int x = 3;
    int y = 4; 

    swap(&x,&y);

    printf( "\n  Original X is 3 Swapped X  is %d \n  Original Y 4 Swapped Y is  is %d \n",x,y);


    return 0;

}


void swap(int *x, int *y){
    int temp = * x;
    * x = * y;
    * y = temp;

}