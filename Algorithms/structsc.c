#include <stdio.h>
#include <string.h>


typedef struct 
{
    char * name;
    char * phonenumber;


}Person;



int main(){

    Person person [2];
    person[0].name = "James"; 
    person[0].phonenumber = "000-111-3456"; 

    person[1].name = "Liby"; 
    person[1].phonenumber = "000-345-3429";

    for(int i = 0; i <sizeof(person)/sizeof(person[0]); i++){

        //printf("%s \n",person[i].name);

        if(strcmp( person[i].name,"James") == 0){

            printf("%s phone number found,  number is %s \n",person[i].name, person[i].phonenumber);
            return 0; 
            
        }

    }

    printf("Phone not found");
    return 1;
}