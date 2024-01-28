#include "../include/headerA3.h"

int main(int argc, char* argv[]) {

    struct employee *headLL = NULL;
    int option;
    char name[100];
    loadEmpData(&headLL,"proFile.txt");

    
    do {
        
            printf("Please select an option from the menu:\n");
            printf("1. Add a new employee\n");
            printf("2. Print data of all employees\n");
            printf("3. Print data of the nth employee\n");
            printf("4. Search for employee based on empId\n");
            printf("5. Search for employee based on full name\n");
            printf("6. Count the total number of employees\n");
            printf("7. Sort the employees based on their empId\n");
            printf("8. Remove the nth employee in the current LL\n");
            printf("9. Remove all employees in the current LL\n");
            printf("10. Exit\n");
            scanf("%d", &option);

        switch (option) {
            case 1:
                recruitEmployee(&headLL);
                break;

            case 2:
                printAll(headLL);
                break;

            case 3:

                printf("Enter the index of the employee to print: ");
                int n;
                scanf("%d", &n);
                printOne(headLL, n);
                break;

            case 4:
            
                printf("Enter the employee ID to look for: ");
                int empId;
                scanf("%d", &empId);
                int index = lookOnId(headLL, empId);
                if (index == -1) {
                  printf("Employee not found.\n");
                } else {
                  printf("Found employee at index %d.\n", index);
                }
                    break;

            case 5:
                
                printf("Enter the full name to look for: ");
                scanf("\n");
                scanf("%[^\n]", name);
                int nameIndex = lookOnFullName(headLL, name);
                if (nameIndex == -1) {
                printf("Employee not found.\n");
                } else {
                printf("Found employee at index %d.\n", nameIndex);
                }
                break;

            case 6:
                countEmployees(headLL);
                break;

            case 7:
                sortEmployeesId(headLL);
                break;

            case 8:
                printf("Enter the index of the employee to fire: ");
                scanf("%d", &n);
                fireOne(&headLL, n);
                break;

            case 9:
                fireAll(&headLL);
                headLL = NULL;
                break;

            case 10:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option. Please enter a number from 1 to 10.\n");
                break;
        }
    } while (option != 10);

    return 0;
}
