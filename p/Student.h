#include <stdio.h>

#ifndef STUDENT_H
#define STUDENT_H

#include "Test.h"
#include "Class.h"


typedef struct {
    char name[50];
    int tz;
    char dataBorn[20];
    Test tests[5];
    int num_tests; 
} Student;

//הוספת תלמידה לכיתה
void addStudent(Class* c);

#endif 
