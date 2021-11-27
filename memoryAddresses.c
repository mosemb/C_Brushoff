#include <stdio.h>

int main(){

    int age = 30;
    double gpa = 4.5;
    char name [30] = "Riddick";

   // The & helps us access the memory address of the value we are looking for
    printf(" Age memory address %p\n GPA memory address %p\n Name memory address %p\n", &age,&gpa,&name);

}