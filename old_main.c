#include <stdio.h>

char[3] grade(float score) {
    
    if (80.00 >= score <= 100.00) {
        return "A"
    } else if ( 75.00>= score <= 79.99) {
        return "A-"
    } else if (70.00 >= score >= 74.99) {
        return "B+"
    } else if (65.00 >= score >= 69.99) {
        return 'B'
    } else if (60.00 >= score >= 64.99) {
        return 'B-'
    }else if (55.00 >= score >= 59.99) {
        return 'C+'
    }else if (50.00 >= score >= 54.99) {
        return "C"
    }else if (45.00 >= score >= 49.99) {
        return "C-"
    }else if (40.00 >= score >= 44.99) {
        return "D+"
    } else if (35.00 >= score >= 39.99) {
        return "D"
    } else if (30.00 >= score >= 34.99) {
        return "D-"
    } else if (0.00 >= score >= 29.99) {
        return "F"
    } else  {
        return "N/A"
    } 
}

int main() {

    char first_name[20], second_name[20], last_name[20];

    char subject1[15], subject2[15], subject3[15], subject4[15], subject5[15], subject6[15], subject7[15];
    
    float marks1,marks2,marks3,marks4,marks5,marks6,marks7;


    // printf("\nPlease Enter your First Name: ");
    // scanf("%19s", first_name);
    // printf("\nPlease Enter your Second Name: ");
    // scanf("%19s", second_name);
    // printf("\nPlease Enter your Last Name: ");
    // scanf("%19s", last_name);



    printf("\nEnter the Name of Subject 1:  ");
    scanf("%14s", subject1);
    printf("Scored Subject 1:  ");
    scanf("%f", &marks1);

    printf("\nEnter the Name of Subject 2:  ");
    scanf("%14s", subject2);
    printf("Scored Subject 2:  ");
    scanf("%f", &marks2);

    printf("\nEnter the Name of Subject 3:  ");
    scanf("%14s", subject3);
    printf("Scored Subject 3:  ");
    scanf("%f", &marks3);

    printf("\nEnter the Name of Subject 4:  ");
    scanf("%14s", subject4);
    printf("Scored Subject 4:  ");
    scanf("%f", &marks4);

    printf("\nEnter the Name of Subject 5:  ");
    scanf("%14s", subject5);
    printf("Scored Subject 5:  ");
    scanf("%f", &marks5);

    printf("\nEnter the Name of Subject 6:  ");
    scanf("%14s", subject6);
    printf("Scored Subject 6:  ");
    scanf("%f", &marks6);

    printf("\nEnter the Name of Subject 7:  ");
    scanf("%14s", subject7);
    printf("Score of ubject 7:  ");
    scanf("%f", &marks7);

    float total = marks1+marks2+marks3+marks4+marks5+marks6+marks7;     

    printf("\nResults for %s, %s %s", last_name, first_name, second_name);

    printf("%s    ---------- %s", subject1, grade(marks1));
    printf("%s    ---------- %s", subject2, grade(marks2));
    printf("%s    ---------- %s", subject3, grade(marks3));
    printf("%s    ---------- %s", subject4, grade(marks4));
    printf("%s    ---------- %s", subject5, grade(marks5));
    printf("%s    ---------- %s", subject6, grade(marks6));
    printf("%s    ---------- %s", subject7, grade(marks7));

    printf("Total Agragate Grade ====== %f", grade(total))
    return 0;
}