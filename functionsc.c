#include <stdio.h>
#include <stdlib.h>

void sayHi(char name [], int age);
//int powernum(int base, int power);

double cube(double num);
void maxNums(int num, int num2);


int powernum(int base, int power){
    int result = 1;
    for(int i =1; i<=power;i++){

        result *= base;
    }

    return result;
}

double cube(double num){
   double result = num*num*num;

    return result;
}

int main(){
    //sayHi("Mike", 23);
    //sayHi("Johnie",24);
    double res = cube(5);
    int result = powernum(8,8);
    printf("%f \n",res);
    printf("%d \n", result);
    maxNums(8,9);

    return 0;
}



void sayHi(char name [], int age){

    printf("Hi %s your age is %d \n",name, age);

}

void maxNums(int num, int num2){


    if(num>num2){

        printf("Num is greater \n");
    }else if(num2>num){

        printf("Num2 is greater \n");
    }else {
        printf("Nums are Equal \n");
    }

}



