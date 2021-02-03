#include <stdio.h>

typedef char *string;

struct Student
{
	string first_name[15];

	string last_name[15];

	int roll;

	string department[20];

	string semester[10];

	string subject[30];

	string grade[3];

	float gpa;

	float cgpa;
};

void take_student_information(struct Student *);

void display_student_information(struct Student *);

int main()
{
	struct Student student[5];

	take_student_information(student);

	display_student_information(student);

	return 0;
}

void take_student_information(struct Student *pointer)
{
	int index = 1;

	int opinion;

	while (1)
	{
		printf("If you want to take more studend's information please enter 1(for yes) else enter 0 (for no): \n\n");

		scanf("%d", &opinion);

		if (opinion == 0)
		{
			break;
		}
		else
		{
			printf("Enter detail of student #%d\n\n", index);

			printf("Please enter the student's' first name:\n");

			scanf("%s", pointer->first_name);

			printf("Please enter the student's' last name:\n");

			scanf("%s", pointer->last_name);

			printf("Please enter the student's' roll:\n");

			scanf("%d", &pointer->roll);

			printf("Please enter the student's' department:\n");

			scanf("%s", pointer->department);

			printf("Please enter the student's' semester:\n");

			scanf("%s", pointer->semester);

			printf("Please enter the student's' subject:\n");

			scanf("%s", pointer->subject);

			printf("Please enter the student's' grade:\n");

			scanf("%s", pointer->grade);

			printf("Please enter the student's' gpa:\n");

			scanf("%f", &pointer->gpa);

			printf("Please enter the student's' cgpa:\n");

			scanf("%f", &pointer->cgpa);

			index++;

			pointer++;
		}
	}
}

void display_student_information(struct Student *pointer)
{
	int index = 1;

	int opinion;

	while (1)
	{
		printf("If you want to show more studend's information please enter 1(for yes) else enter 0 (for no): \n\n");

		scanf("%d", &opinion);

		if (opinion == 0)
		{
			break;
		}
		else
		{
			printf("Detail of student #%d\n\n", index);
			
			printf("First name the student is: %s\n\n", pointer->first_name);

			printf("Last name of the student is: %s\n\n", pointer->last_name);

			printf("Roll of the student is: %d\n\n", pointer->roll);

			printf("Department of the student is: %s\n\n", pointer->department);

			printf("Semester of the student is: %s\n\n", pointer->semester);

			printf("Subject of the student is: %s\n\n", pointer->subject);

			printf("Grade of the student is: %s\n\n", pointer->grade);

			printf("GPA of the student is: %f\n\n", pointer->gpa);

			printf("CGPA of the student is: %f\n\n", pointer->cgpa);

			index++;

			pointer++;
		}
	}
}