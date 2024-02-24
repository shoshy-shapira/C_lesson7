#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"Student.h"
#include "Class.h"


//הוספת תלמידה לכיתה
void addStudent(Class* c){
    Student student;
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter student tz: ");
    scanf("%d", &student.tz);
    printf("Enter student date of birth: ");
    scanf("%s", student.dataBorn);

    c->students = (Student*)realloc(c->students, (c->num_students + 1) * sizeof(Student));

    c->students[c->num_students] = student;
    c->num_students++;

}
