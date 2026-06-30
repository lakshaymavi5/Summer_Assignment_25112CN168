#include <stdio.h>
#include <string.h>

#define MAX 5

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < MAX) {
                printf("Enter ID: ");
                scanf("%d", &emp[count].id);
                printf("Enter Name: ");
                scanf("%s", emp[count].name);
                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);
                count++;
                printf("Employee added successfully!\n");
            } else {
                printf("System full! Cannot add more employees.\n");
            }
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nID\tName\tSalary\n");
                printf("------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                }
            }
        } 
        else if (choice == 3) {
            printf("Exiting program. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
