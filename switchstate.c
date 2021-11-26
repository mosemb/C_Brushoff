#include <stdio.h>

int main(){

    char grade;

    printf("Enter the grade ");
    scanf(" %c",&grade);

    switch (grade)
    {
    case 'A':
                

        printf("You passed the class ! \n");         
        break;
    case 'B':
          printf("You did okay \n");
          break;

    case 'F':
          printf("You Failed the class \n");   
          break; 
    
    default:
        printf("Not valid grade! \n");
        break;
    }

    return 0;
}