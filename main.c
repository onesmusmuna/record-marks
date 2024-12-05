#include <stdio.h>

const char* grade(float score) {
    
    if (score >= 80.00 && score <= 100.00) {
        return "A";
    } else if (score >= 75.00 && score <= 79.99) {
        return "A-";
    } else if (score >= 70.00 && score <= 74.99) {
        return "B+";
    } else if (score >= 65.00 && score <= 69.99) {
        return "B";
    } else if (score >= 60.00 && score <= 64.99) {
        return "B-";
    } else if (score >= 55.00 && score <= 59.99) {
        return "C+";
    } else if (score >= 50.00 && score <= 54.99) {
        return "C";
    } else if (score >= 45.00 && score <= 49.99) {
        return "C-";
    } else if (score >= 40.00 && score <= 44.99) {
        return "D+";
    } else if (score >= 35.00 && score <= 39.99) {
        return "D";
    } else if (score >= 30.00 && score <= 34.99) {
        return "D-";
    } else if (score >= 0.00 && score <= 29.99) {
        return "F";
    } else {
        return "N/A"; 
    } 
}

int main() {
    int student_index;
    char student_name[3][15];
    char subjects[7][25];
    float scores[7];

    printf("\nEnter Your Index Number: ");
    scanf("%d", &student_index);

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter Name %d: ", i+1);
        scanf("%14s", student_name[i]);
    }

    printf("\n\tDear %s, %s", student_name[2], student_name[0]);
    printf("\n\tPlease enter the subject and the scores as directed.\n");

    
    for (int i = 0; i < 7; i++) {
        printf("Enter Name of Subject %d: ", i+1);
        scanf("%24s", subjects[i]);

        printf("Enter Score of %s: ", subjects[i]);
        scanf("%f", &scores[i]);
        printf("\n");
    }

    printf("\n%-20s | %-6s | %-6s\n", "Subject", "Score", "Grade");
    printf("---------------------|--------|--------\n");

    for (int i=0; i<7; i++) {
        printf("%-20s | %-6.2f | %-6s\n", subjects[i], scores[i], grade(scores[i]) );
    }

    float total = 0.0;

    for (int i = 0; i < 7; i++) {
        total += scores[i];
    }

    float average = total / 7;

    printf("\n\tYour Agregate Grade is %s", grade(average));
    printf("\n");

}

