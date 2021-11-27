#include <stdio.h>

int main(){

    int index = 0;
    while(index<5){

        printf("Loop is still true %d \n",index);
        index = index+1;

    }

    int luckynums []  = {3,4,5,5,6,6,7,90};
    //size_t n = sizeof(luckynums);
    printf("size of %lu",sizeof(luckynums)/sizeof(int));

   for(int i = 0; i<sizeof(luckynums)/sizeof(int); i++){

       printf("Printing out number %d \n",luckynums[i]);

   }

}