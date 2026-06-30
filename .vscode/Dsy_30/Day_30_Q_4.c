#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define NAME_LENGTH 50

void addStudents(char names[MAX_STUDENTS][NAME_LENGTH], float marks[MAX_STUDENTS], int count);
void displayStudents(char names[MAX_STUDENTS][NAME_LENGTH], float marks[MAX_STUDENTS], int count);
void calculateAverage(float marks[MAX_STUDENTS], int count);

int main() {
    char studentNames[MAX_STUDENTS][NAME_LENGTH];
    float studentMarks[MAX_STUDENTS];
    int choice;

    printf("=== Student Management Mini Project ===\n");

    while(1) {
        printf("\n1. Add Student Data\n");
        printf("2. Display All Students\n");
        printf("3. Calculate Average Marks\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudents(studentNames, studentMarks, MAX_STUDENTS);
                break;
            case 2:
                displayStudents(studentNames, studentMarks, MAX_STUDENTS);
                break;
            case 3:
                calculateAverage(studentMarks, MAX_STUDENTS);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addStudents(char names[MAX_STUDENTS][NAME_LENGTH], float marks[MAX_STUDENTS], int count) {
    printf("\n--- Enter Data for %d Students ---\n", count);
    for(int i = 0; i < count; i++) {
        printf("Enter name for student %d (No spaces): ", i + 1);
        scanf("%s", names[i]); 
        
        printf("Enter marks for %s: ", names[i]);
        scanf("%f", &marks[i]);
    }
    printf("Data successfully saved!\n");
}

void displayStudents(char names[MAX_STUDENTS][NAME_LENGTH], float marks[MAX_STUDENTS], int count) {
    printf("\n--- Student Records ---\n");
    printf("%-20s %-10s\n", "Name", "Marks");
    printf("------------------------------\n");
    for(int i = 0; i < count; i++) {
        printf("%-20s %-10.2f\n", names[i], marks[i]);
    }
}

void calculateAverage(float marks[MAX_STUDENTS], int count) {
    float sum = 0.0, average;
    for(int i = 0; i < count; i++) {
        sum += marks[i];
    }
    average = sum / count;
    printf("\nAverage Marks of the class: %.2f\n", average);
}
