#include <stdio.h>
#include <string.h>

struct Student {
    char name [50];
    char major [50];
    double age; 
    double gpa;
};

int main(){

    struct Student student;
    student.age = 50;
    student.gpa = 3.8;
    strcpy(student.major,"Bussines Economics ");
    strcpy(student.name, "James Brown");
    

printf("Student major: %s \n",student.major);
printf("Student name: %s \n",student.name);
printf("Student gpa: %f \n",student.gpa);
printf("Student age: %f \n",student.age);

return 0;

}


