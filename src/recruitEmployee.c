#include "../include/headerA3.h"

void recruitEmployee(struct employee **headLL)
{
    a3Emp *new_employee = malloc(sizeof(struct employee));
    char name[MAX_LENGTH];
    int i = 1;
    char state = 'y';
    int sum=0;
    int tempEmp=0;

    // Ask user for employee's first and last name and store them in the new employee struct.
    printf("Enter employee's first name: ");
    scanf("%s", new_employee->fname);
    printf("Enter employee's last name: ");
    scanf("%s", new_employee->lname);

    // Calculate employee ID by summing ASCII values of first name and adding length of last name.
    for (int i = 0; new_employee->fname[i] != '\0'; i++)
    {

        sum += new_employee->fname[i];
    }

    tempEmp = sum + strlen(new_employee->lname);
    new_employee->empId = tempEmp;
    // Initialize number of dependents to 0 and dynamically allocate memory for 'dependents' array.
    new_employee->numDependents = 0;
    new_employee->dependents = malloc(sizeof(char *));
    // Traverse the linked list to the end to add new employee to the end.
    a3Emp *current_employee = *headLL;

    do
    {
        // Ask user for dependent name and store it in the 'dependents' array.
        printf("Enter name of dependent %d: ", i);
        scanf("%s", name);
        new_employee->numDependents++;
        new_employee->dependents = realloc(new_employee->dependents, new_employee->numDependents * sizeof(char *));
        new_employee->dependents[new_employee->numDependents - 1] = malloc(strlen(name) + 1);
        strcpy(new_employee->dependents[new_employee->numDependents - 1], name);
        // Ask user if there are more dependents to add.
        printf("Do you have any more dependents?(y/n): ");
        scanf(" %c", &state);
        i++;

    } while (state == 'y' || state == 'Y');
    // Set the new employee's 'nextEmployee' pointer to NULL.

    new_employee->nextEmployee = NULL;
    // Add the new employee to the end of the linked list.
    if (*headLL == NULL)
    {

        *headLL = new_employee;
    }
    else
    {

        while (current_employee->nextEmployee != NULL)
        {
            current_employee = current_employee->nextEmployee;
        }
        current_employee->nextEmployee = new_employee;
    }

    // Inform user that a new employee has been added.
    printf("New employee added to the list.\n");
}
