#include "../include/headerA3.h"

void printOne(struct employee *headLL, int whichOne)
{

    int i = 1;
    // If the list is empty, print a message and return.
    if (headLL == NULL)
    {
        printf("The employee list is empty.\n");
        return;
    }
    // Traverse the linked list until the requested employee is found.
    else
    {
        a3Emp *currentEmployee = headLL;
        while (currentEmployee != NULL)
        {
            // If the current employee is not the requested one, continue to the next.
            if (i != whichOne)
            {

                currentEmployee = currentEmployee->nextEmployee;
                i++;
            }
            // If the current employee is the requested one, break out of the loop.
            else if (i == whichOne)
            {
                break;
            }
        }
        // Print the information of the requested employee.
        printf("Employee # %d:\n", i);
        printf("Employee id: %d\n", currentEmployee->empId);
        printf("First name: %s\n", currentEmployee->fname);
        printf("Last name: %s\n", currentEmployee->lname);
        printf("Dependents[%d]: ", currentEmployee->numDependents);

        for (int i = 0; i < currentEmployee->numDependents; i++)
        {

            printf("%s", currentEmployee->dependents[i]);
            // Add a comma after each dependent, except for the last one.
            if (i < currentEmployee->numDependents - 1)
            {
                printf(", ");
            }
        }
        printf("\n\n");
    }
}