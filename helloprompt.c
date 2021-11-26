#include <stdio.h>

int main(){

    printf("What is your name? \n");
    char name[20];
    fgets(name,20,stdin);
    printf("Hi  %s \n", name);

    return 0;

}