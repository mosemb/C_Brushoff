#include <stdio.h>


int main(){


    int age = 30; 
    // Pointers 
    int * pAge = &age;

    char name[30]  = "Ray";
    //Pointer 
   // char * pname = &name;
   char * pName = name;

    double gpa = 4.2;
    //Pointers 
    double * pgpa = &gpa;

    // A pointer is a type of a data type that stores memory addresses. Period. Similary ints store integers and doubles
    //store decimal numbers.

    printf("Value of memory address %p  and the value held is %d\n",pAge,*pAge);
    printf("Value of memory address %p  and the value held is %c\n",pName,*pName);
    printf("Value of memory address %p  and the value held is %f\n",pgpa,*pgpa);






}