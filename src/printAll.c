#include "../include/headerA3.h"

void printAll(struct employee *headLL)
{
    int j = 1;

    // checks if the linked list is empty by checking if the head pointer is NULL
    if (headLL == NULL)
    {
        // prints a message indicating that no employees were found
        printf("No employees found.\n");
        return;
    }
    // prints a header message to indicate that the following lines will contain employee details
    printf("Employee list:\n");
    // creates a pointer 'currentEmployee' to traverse the linked list starting from the head
    a3Emp *currentEmployee = headLL;
    // iterates through the linked list until the end is reached (indicated by the last node pointing to NULL)
    while (currentEmployee != NULL)
    {
        // prints employee details
        printf("Employee # %d:\n", j);
        printf("Employee id: %d\n", currentEmployee->empId);
        printf("First name: %s\n", currentEmployee->fname);
        printf("Last name: %s\n", currentEmployee->lname);
        printf("Dependents[%d]: ", currentEmployee->numDependents);

        // iterates through the dependents array of the current employee
        for (int i = 0; i < currentEmployee->numDependents; i++)
        {
            // prints the name of the dependent at the current index
            printf("%s", currentEmployee->dependents[i]);
            // checks if there are more dependents to be printed
            if (i < currentEmployee->numDependents - 1)
            {
                // prints a comma and space to separate the names of the dependents
                printf(", ");
            }
        }
        printf("\n\n");
        // moves the pointer to the next employee in the linked list
        currentEmployee = currentEmployee->nextEmployee;
        j++;
    }
    // prints the total number of employees printed using the counter variable 'j'
    printf("Currently there are %d employees\n\n", j - 1);
}