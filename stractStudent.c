
#include<stdio.h>
struct student{
int rollno;
char name[20];
int age;
};
struct student inputStudentData();
void showStudentData(struct student s);
main()
{
    struct student s1;
    s1=inputStudentData();
    showStudentData(s1);
    getch();

}
struct student inputStudentData(){
struct student s;
printf("Enter rollno,name and age of student");
scanf("%d",&s.rollno);
fflush(stdin);
gets(s.name);
scanf("%d",&s.age);
return(s);
}
void showStudentData(struct student s){
printf("\nstudent Data\n");
printf("Roll No:%d",s.rollno);
printf("\nname: %s",s.name);
printf("\nAge :%d",s.age);
}