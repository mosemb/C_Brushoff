#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){


    int num = 50; 
    int * p = &num;  // The address of num


    char * test = "Pain";

    //printf("The character  is %c \n",*test);
    printf("\n Memory Addresses  \n");
    printf("The memory address is %p \n", test);
    printf("The memory address is %p \n", &test[1]);
    printf("The memory address is %p \n", &test[2]);
    printf("The memory address is %p \n", &test[3]);
    printf("The memory address is %p \n", &test[4]);

    // The characters from the memory addresses. 
    printf("\n String Array Notation  \n");
    printf("The memory address is %p  and character is %c\n", test,*test);
    printf("The memory address is %p  and character is %c \n", &test[1],*&test[1]);
    printf("The memory address is %p  and character is %c\n", &test[2],*&test[2]);
    printf("The memory address is %p  and character is %c\n", &test[3], *&test[3]);
    //printf("The memory address is %c  and character is %c\n", *&test[4]),*&test[4]; 

    // Like wise we can do pointer arithmetic to have the same effect on getting the string characters. 
    printf("\n Pointer Arithemetic  \n");
    printf("The memory address is %p  and character is %c\n", test,*test);
    printf("The memory address is %p  and character is %c\n", test,*(test+1));
    printf("The memory address is %p  and character is %c\n", test,*(test+2));
    printf("The memory address is %p  and character is %c\n", test,*(test+3));
    printf("The memory address is %p  and character is %c\n", test,*(test+4));

    // comparing 2 strings 
    char * str1 = "pain";
    char * str2 = "pains";
    char * str3 = "pains";

    int comparisonOne = strcmp(str1,str2);
    int comparisonTwo = strcmp(str2,str3);

    printf("This is comparison one %d \n",comparisonOne);
    printf("This is comparison two %d \n",comparisonTwo);
    

    if(comparisonOne==0){

        printf("Same \n");

    }else{

        printf("Different \n");

    }

    char * s = "stand";
    char * t = malloc(strlen(s)+1); // Assigns memory to an array

    if(t == NULL){ // If no memory has been allocated to the pointer bail out. 

        return 1; 
    }
    
    // Copy array elements from one array to another 
    for(int i = 0; i<=strlen(s); i++){
        t[i] = s[i]; // This line of code copys elements from one array to another

        printf(" \n S vals  %c \n ",s[i]) ;

        printf(" \n T vals  %c \n ",t[i]) ;

    }

    // Make the first character upper for the t string which is an array. 
    if(strlen(t)>0){

         t[0] = toupper(t[0]); 
          printf("\n Capitalised first character of t string %c \n",t[0]);

    }
   
   // But strcpy() can copy the array as well takes source array and then destination array
   //strcpy(s,t);
   
   // Prints out the full string
   printf("%s\n",s);

   free(t);// Free the memory asked for from malloc



    return 0;
}