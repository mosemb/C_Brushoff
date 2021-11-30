#include <stdio.h>
#include <stdlib.h>



int main(){

    int *list = malloc(3* sizeof(int));
    list[0] = 1;
    list[1] = 2;
    list[2] = 3; 

    printf("First list \n"); 
      for(int i =0; i<=sizeof(list)/sizeof(list[0]); i++){

        printf("%d \n",list[i]);


    }

    //free(list);

    // we are making a temporary list to store values temporalily.
    int * temp = realloc(list,4*sizeof(int)); // realloc , reallocates memory to an array. 

    
    if(temp == NULL){
        return 1;
    }

    temp[3] = 4; 


     printf("Second List \n ");

      for(int i =0; i<4; i++){

       printf("%d \n",list[i]);


    }

    

    
    free(list); // This frees memory allocated by malloc.
    list = temp;  

   


    // Second list
   

}