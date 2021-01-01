	
#include <stdio.h>
struct student_college
{
    int id;
    char name[50];
};
 
struct student_detail 
{
    int id;
    char name[20];
    float percentage;
    struct student_college clg;
}stu;
 
int main() 
{
    struct student_detail stu= {1, "Raju", 90.5, 71145,"Anna University"};
    printf(" Id is: %d \n", stu.id);
    printf(" Name is: %s \n", stu.name);
    printf(" Percentage is: %f \n\n", stu.percentage);
    printf(" College Id is: %d \n", stu.clg.id);
    printf(" College Name is: %s \n", stu.clg.name);
    return 0;
}