#include "../include/headerA3.h"

int lookOnFullName(struct employee *headLL, char whichName[100])
{
    // Remove all spaces from the input name
    char newname[100];
    int j = 0;
    for (int i = 0; i < strlen(whichName); i++)
    {
        if (whichName[i] != ' ')
        {
            newname[j] = whichName[i];
            j++;
        }
    }
    newname[j] = '\0';
    // Search through the linked list of employees to find a match
    struct employee *current = headLL;
    int count = 1;
    while (current != NULL)
    {
        char fullname[100];
        strcpy(fullname, current->fname);
        strcat(fullname, current->lname);
        // If a match is found, print the employee's information and return the employee's position in the list
        if (strcmp(fullname, newname) == 0)
        {

            printf("Employee id: %d\n", current->empId);
            printf("First name: %s\n", current->fname);
            printf("Last name: %s\n", current->lname);
            printf("Dependents: ");
            for (int i = 0; i < current->numDependents; i++)
            {
                printf("%s", current->dependents[i]);
                if (i != current->numDependents - 1)
                {
                    printf(", ");
                }
            }
            printf("\n");
            return count;
        }
        else
        {
            current = current->nextEmployee;
            count++;
        }
    }
    // If no match is found, print an error message and return -1
    printf("Employee not found.\n");
    return -1;
}