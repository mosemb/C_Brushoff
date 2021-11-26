#include <stdio.h>

int main(){

    int age; 
    printf("Please enter your age \n");
    scanf("%d",&age);
    printf("Your age is %d \n",age); 

    char name [30];
    printf("Please get us your name \n");
    //fgets(name,30,stdin);
    scanf("%s", name);
    printf("Your name is %s \n", name);



    return 0;
}