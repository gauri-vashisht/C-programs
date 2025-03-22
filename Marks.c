/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student.*/

#include<stdio.h>
int main()
{
int s1, s2, s3, s4, s5;
printf("Enter marks in 5 subjects: ");
scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
int agg = s1+s2+s3+s4+s5;
float per = agg/5;
printf("\nAggregate = %d\nPercentage = %.2f", agg, per);
return 0;
}