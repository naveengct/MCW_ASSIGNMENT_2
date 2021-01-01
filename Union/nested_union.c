	
#include <stdio.h>
union student_college
{
    int id;
    char *name;
};
 
union student_detail 
{
    int id;
    char *name;
    float percentage;
    union student_college clg;
}stu;
 
int main() 
{
    union student_detail stu;
    stu.id=1;
    printf(" Id is: %d \n", stu.id);
    stu.name="Raju";
    printf(" Name is: %s \n", stu.name);
    stu.percentage=90.5;
    printf(" Percentage is: %f \n\n", stu.percentage);
    stu.clg.id=1245;
    printf(" College Id is: %d \n", stu.clg.id);
    stu.clg.name="AUNV";
    printf(" College Name is: %s \n", stu.clg.name);

    printf("\n\n");
    printf(" Id is: %d \n", stu.id);
    printf(" Name is: %s \n", stu.name);
    printf(" Percentage is: %f \n\n", stu.percentage);
    printf(" College Id is: %d \n", stu.clg.id);
    printf(" College Name is: %s \n", stu.clg.name);


    return 0;
}