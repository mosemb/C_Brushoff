#include <stdio.h>

int main (){
    
    FILE * pointerfile = fopen("./Employees.txt","w"); // We are creating a memory address with a pointer to hold the file. 
    fprintf(pointerfile,"James Craig :Accounting \n Rita Hines :Information Technology \n James Becham : Engineering ");
    fclose(pointerfile);

    
    return 0;
}