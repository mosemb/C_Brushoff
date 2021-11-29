#include <stdio.h>


int main(){

    char line[255];
    FILE *pointertofile = fopen("Employees.txt","r");

    fgets(line,255,pointertofile); // Reads one line of code at at time. 
                                   // To read more lines of code you put this line of code in a loop. 
    printf("%s",line);
    fclose(pointertofile);


}