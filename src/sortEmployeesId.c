#include "../include/headerA3.h"

void sortEmployeesId(struct employee *headLL) 
{
    // Declare two pointers to traverse the linked list
    a3Emp *current = headLL;
    a3Emp *index;

    // Check if the linked list is empty
    if (headLL == NULL) 
    {
        printf("Unable to sort as linked list is empty..\n");
        return;
    }
    // Traverse the linked list and compare elements
    while (current->nextEmployee != NULL) 
    {
        index = current->nextEmployee;

        while (index != NULL)     
        {
            // Swap elements if they are not in order
            if (current->empId > index->empId) 
            {
                // Swap employee id
                int tempEmpId = current->empId;    
                current->empId = index->empId;
                index->empId = tempEmpId;
                // Swap employee first name
                char tempFname[MAX_LENGTH];
                strcpy(tempFname, current->fname);
                strcpy(current->fname, index->fname);
                strcpy(index->fname, tempFname);
                // Swap employee last name
                char tempLname[MAX_LENGTH];
                strcpy(tempLname, current->lname);
                strcpy(current->lname, index->lname);
                strcpy(index->lname, tempLname);
                // Swap number of dependents 
                int tempNumDependents = current->numDependents;
                current->numDependents = index->numDependents;
                index->numDependents = tempNumDependents;
                // Swap dependent names
                char **tempDependents = current->dependents;
                current->dependents = index->dependents;
                index->dependents = tempDependents;
            }
            // Move to the next element in the linked list
            index = index->nextEmployee;
        }
        // Move to the next element in the linked list
        current = current->nextEmployee;
    }
    // Print the sorted list
    printf("After sorting on empId, the employees are as follows:\n\n");
    printAll(headLL); 
}