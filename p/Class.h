
#ifndef CLASS_H
#define CLASS_H


#include "Class.c"
#include "Student.h"
typedef struct {
    char name[50];
    Student* students;
    int num_students;
} Class;

//מחשב ממוצע כולל של כל הציונים על פי שמה
float StudentAverage(Class* class , char* studentName);
//לחשב ממוצע כיתתי למקצוע מסוים
float ClassAverage(Class* class , char* name);
// להדפיס גליון ציונים כיתתי של פרטי הבנות והציונים בכל מקצוע
void printClassMarkSheet(Class* class );




#endif 
