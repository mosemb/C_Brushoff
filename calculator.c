#include <stdio.h>

int main(){

    double num1;
    double num2; 
    char operato;
    
    printf("Please enter the first number : ");
    scanf("%lf",&num1);
    printf("Please enter the second number :");
    scanf("%lf",&num2);
    printf("Please enter operator :");
    scanf(" %c",&operato);

    if(operato == '+'){
        double result = num1+num2;
        printf("The sum is %f \n ",result);
    }else if(operato == '-'){
        double result2 = num1-num2;
        printf("The difference is %f \n", result2);
    }else if(operato == '/'){
        double result3 = num1/num2; 
        printf("The divisor is %f \n",result3);
    }else if(operato== '*'){
        double result4 = num1*num2;
        printf("The product is %f \n",result4);
    }else{
        printf("Its an invalid operator \n");
    }

}