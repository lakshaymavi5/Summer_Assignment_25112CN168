#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];  
    float marks;
};

int main() {
    struct Student record[100]; 
    int totalStudents = 0;
    int choice;

    while (1) {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (totalStudents >= 100) {
                printf("\nError: Record system is full!\n");
            } else {
                printf("\nEnter Roll Number: ");
                scanf("%d", &record[totalStudents].rollNumber);

                printf("Enter Name (Single word): ");
                scanf("%s", record[totalStudents].name);

                printf("Enter Marks: ");
                scanf("%f", &record[totalStudents].marks);

                totalStudents++; 
                printf("Record added successfully!\n");
            }
        } 
        else if (choice == 2) {
            if (totalStudents == 0) {
                printf("\nNo student records found.\n");
            } else {
                printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
                printf("------------------------------------------\n");
                for (int i = 0; i < totalStudents; i++) {
                    printf("%-10d %-20s %-10.2f\n", 
                           record[i].rollNumber, 
                           record[i].name, 
                           record[i].marks);
                }
            }
        } 
        else if (choice == 3) {
            printf("\nExiting program. Goodbye!\n");
            break; 
        } 
        else {
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
