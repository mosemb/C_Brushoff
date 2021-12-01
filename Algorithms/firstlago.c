#include <stdio.h>
#include <string.h>


int findStr();

int main(){


     findStr();


    int nums [] = {8,9,4,5,0,3,4,2,6};
   

    for(int i = 0; i<sizeof(nums)/sizeof(nums[0]); i++){

        if(nums[i]==0){

            printf("Number Found !\n"); 
            return 0;
        }

    }
    printf("Number Not found \n");
    return 1;

}

int findStr(){
    char * strReal [] = { "Liby", "Diana", "Dinner", "Dennis", "Dario", "John", "James"};
    
    for(int i = 0; i<sizeof(strReal)/sizeof(strReal[0]); i++){
        if(strcmp(strReal[i], "Dinner")==0){
            printf("String Found !\n");
            return 0;
        }
    }

    printf("String not found ! \n ");
    return 1;

}

