// p.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INPUT 15

#include "Class.h"
#include"Student.h"



int main()
{
	Class myClass;
	myClass.students = NULL;
	myClass.num_students = 0;
	char input[MAX_INPUT];
	printf("Enter student name (or type '-1' to stop adding students): ");
	scanf("%s", input);

	while (strcmp(input, "-1") != 0) {
			addStudent(&myClass);
	}
	free(input);

}