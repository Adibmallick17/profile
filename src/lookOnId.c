#include "../include/headerA3.h"

int lookOnId(struct employee *headLL, int whichEmpId)
{

    int i = 1;

    // Check if the linked list is empty
    if (headLL == NULL)
    {
        printf("File empty.\n");
    }
    
    // Start at the beginning of the linked list
    a3Emp *currentEmployee = headLL;
    while (currentEmployee != NULL)
    {
        // If the current employee's ID does not match the input ID, move on to the next employee
        if (currentEmployee->empId != whichEmpId)
        {

            currentEmployee = currentEmployee->nextEmployee;
            i++;
        }
        // If the current employee's ID matches the input ID, stop searching
        else if (currentEmployee->empId == whichEmpId)
        {

            break;
        }
    }

    // Print out the employee's information
    printf("Employee # %d:\n", i);
    printf("Employee id: %d\n", currentEmployee->empId);
    printf("First name: %s\n", currentEmployee->fname);
    printf("Last name: %s\n", currentEmployee->lname);
    printf("Dependents[%d]: ", currentEmployee->numDependents);

    // Print out the employee's dependents
    for (int i = 0; i < currentEmployee->numDependents; i++)
    {

        printf("%s", currentEmployee->dependents[i]);

        if (i < currentEmployee->numDependents - 1)
        {
            printf(", ");
        }
    }
    printf("\n\n");

    return i;
}