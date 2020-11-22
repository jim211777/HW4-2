#include<stdio.h>
#include<stdlib.h>
#define students 3
#define exams 4
int minnum(const int grades[][exams], int pupils, int tests);
int maxnum(const int grades[][exams], int pupils, int tests);
double avg(const int set[], int tests);
void printarray(const int grades[][exams], int pupils, int tests);
int main(void)
{
	int student;
	const int stgrades[students][exams] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };
	printf("The array is:\n");
	printarray(stgrades, students, exams);
	printf("\n\nLowest grade: %d\nHighest grade: %d\n", minnum(stgrades, students, exams), maxnum(stgrades, students, exams));
	for (student = 0; student < students; student++)
	{
		printf("The average grade for student %d is %.2f\n", student, avg(stgrades[student], exams));
	}
	system("pause");
	return 0;
}
void printarray(const int grades[][exams], int pupils, int tests)
{
	int i;
	int j;
	printf("                 [0]  [1]  [2]  [3]");
	for (i = 0; i < 3; i++)
	{

		printf("\nstudentGrades[%d] ", i);
		for (j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}
int minnum(const int grades[][exams], int pupils, int tests)
{
	int i;
	int j;
	int lowGrade = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{

			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}
	return lowGrade;
}
int maxnum(const int grades[][exams], int pupils, int tests)
{
	int i;
	int j;
	int highGrade = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{

			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}

	return highGrade;
}
double avg(const int set[], int tests)
{
	int i;
	int total = 0;
	for (i = 0; i < tests; i++)
	{
		total += set[i];
	}
	return (double)total / tests;
}

