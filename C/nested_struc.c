#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct student_college_detail
{
  int college_id;
  char *college_name;
};

struct student_detail
{
  char *name;
  int roll_no;
  struct student_college_detail *clg_dtl;
};


int main()
{
   struct student_detail *student;
   student = malloc(sizeof(struct student_detail)*10);
   //student->clg_dtl = malloc(sizeof(struct student_college_detail)*10);
   for(int i=0;i<10;i++)
   { 
     student[i].name = malloc(sizeof(char)*10);
     printf("Enter the name of student\n");
     scanf("%s",student[i].name);
     printf("%d student name is %s\n",i,student[i].name);
     student[i].roll_no = i;
     printf("%d student roll no. is %d\n",i,student[i].roll_no);
     student[i].clg_dtl = malloc(sizeof(struct student_college_detail));
     student[i].clg_dtl[i].college_id = 100;
     printf("%d student roll no. is %d\n",i,student[i].clg_dtl[i].college_id);
     student[i].clg_dtl[i].college_name = malloc(sizeof(char)*4);
     strcpy(student[i].clg_dtl[i].college_name,"IET");
     printf("%d student roll no. is %s\n",i,student[i].clg_dtl[i].college_name);
      
   }

}
