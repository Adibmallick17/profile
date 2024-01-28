#include "../include/headerA3.h"

void fireAll(a3Emp **headLL)
{
    if (*headLL == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }
    // Initialize current to the head of the linked list and traverse the list.
    struct employee *current = *headLL;
    while (current != NULL)
    {
        // Save the next employee in a variable before freeing the current one.
        struct employee *next = current->nextEmployee;
        free(current);
        current = next;
    }
    // Set the head of the linked list to NULL after all employees have been fired.
    *headLL = NULL;
    // Print a message indicating that all employees have been fired.
    printf("All employees have been fired.\n");
}
