#include <stdio.h>

// Function to calculate the grade based on the score
char calculateGrade(int score) {
    if (score < 40)
        return 'E';
    else if (score < 50)
        return 'D';
    else if (score < 60)
        return 'C';
    else if (score < 70)
        return 'B';
    else
        return 'A';
}

int main() {
    const int MAX_STUDENTS = 10;  // Maximum number of students (adjust as needed)
    const int MAX_UNITS = 5;      // Maximum number of units (adjust as needed)

    int registrationNumbers[MAX_STUDENTS];
    int scores[MAX_STUDENTS][MAX_UNITS];
    char grades[MAX_STUDENTS][MAX_UNITS];
    char recommendations[MAX_STUDENTS];

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Read student registration numbers and scores
    for (int i = 0; i < numStudents; i++) {
        printf("\n");
        printf("Enter registration number for student %d: ", i + 1);
        scanf("%d", &registrationNumbers[i]);

        for (int j = 0; j < MAX_UNITS; j++) {
            printf("Enter score for unit %d: ", j + 1);
            scanf("%d", &scores[i][j]);
            grades[i][j] = calculateGrade(scores[i][j]);
        }
        
        // Calculate recommendation based on average grade
        int sum = 0;
        for (int j = 0; j < MAX_UNITS; j++) {
            sum += scores[i][j];
        }
        int average = sum / MAX_UNITS;

        if (average >= 70)
            recommendations[i] = 'A';
        else if (average >= 60)
            recommendations[i] = 'B';
        else if (average >= 50)
            recommendations[i] = 'C';
        else if (average >= 40)
            recommendations[i] = 'D';
        else
            recommendations[i] = 'E';
    }

    // Display summary of units and grades for each student
    printf("\n");
    printf("Summary:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\n");
        printf("Student %d:\n", i + 1);
        printf("Registration Number: %d\n", registrationNumbers[i]);
        for (int j = 0; j < MAX_UNITS; j++) {
            printf("Unit %d: Score = %d, Grade = %c\n", j + 1, scores[i][j], grades[i][j]);
        }
        printf("Recommendation: %c\n", recommendations[i]);
    }

    return 0;
}
