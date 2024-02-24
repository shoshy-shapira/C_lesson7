
#ifndef CLASS_H
#define CLASS_H


#include "Class.c"
#include "Student.h"
typedef struct {
    char name[50];
    Student* students;
    int num_students;
} Class;

//���� ����� ���� �� �� ������� �� �� ���
float StudentAverage(Class* class , char* studentName);
//���� ����� ����� ������ �����
float ClassAverage(Class* class , char* name);
// ������ ����� ������ ����� �� ���� ����� �������� ��� �����
void printClassMarkSheet(Class* class );




#endif 
