#include<stdio.h>
#include<string.h>

typedef struct student {

    int id;
    char name[100];
} student;

void changeName(student *ptr){
    strcpy(ptr->name,"NA");
}
// this saves memory otherwise it copies whole structure to the function.
int main(){

    student s = {101,"sudhin"};
    changeName(&s);
    printf("The student id is: %d and name is: %s\n",s.id,s.name);
    return 0;

}