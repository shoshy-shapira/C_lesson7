#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Class.h"
//#include "Student.h"

//מחשב ממוצע כולל של כל הציונים על פי שמה
float StudentAverage(Class *class, char* studentName) {
    float all = 0;
    int count = 0;
    for (int i = 0; i < class->num_students; i++) {
        if (strcmp(class->students[i].name, studentName) == 0) {
            for (int j = 0; j < class->students[i].num_tests; j++) {
                all += class->students[i].tests[j].grade;
                count++;
            }
            break;
        }
    }
    return count > 0 ? all / count : 0;
}

//לחשב ממוצע כיתתי למקצוע מסוים
float ClassAverage(Class* class, char* name) {
    float totalGrade = 0.0;
    int count = 0;

    for (int i = 0; i < class->num_students; i++) {
        for (int j = 0; j < class->students[i].num_tests; j++) {
            if (strcmp(class->students[i].tests[j].name, name) == 0) {
                totalGrade += class->students[i].tests[j].grade;
                count++;
            }
        }
    }

    if (count == 0) {
        printf("No grades found : %s\n", name);
        return 0.0;
    }

    return totalGrade / count;
}

// להדפיס גליון ציונים כיתתי של פרטי הבנות והציונים בכל מקצוע
void printClassMarkSheet(Class* class) {
    printf("Class Mark Sheet:\n");

    for (int i = 0; i < class->num_students; i++) {
        printf("Student Name: %s\n", class->students[i].name);
        printf("Student tz: %d\n", class->students[i].tz);
        printf("Student Date of Birth: %s\n", class->students[i].dataBorn);

        printf("Subject Marks:\n");
        for (int j = 0; j < class->students[i].num_tests; j++) {
            printf("%s: %d\n", class->students[i].tests[j].name, class->students[i].tests[j].grade);
        }

        printf("\n");
    }
}

