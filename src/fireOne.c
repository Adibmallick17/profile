#include "../include/headerA3.h"

void fireOne(a3Emp **headLL, int whichOne)
{
    struct employee *current = *headLL;
    struct employee *prev = NULL;
    int i = 1;

    // Traverse the linked list until either the end is reached or the desired employee is found.
    while (current != NULL && i < whichOne)
    {
        prev = current;
        current = current->nextEmployee;
        i++;
    }
    // If the end of the list is reached without finding the desired employee, print an error message.
    if (current == NULL)
    {
        printf("Employee not found.\n");
    }
    // If the desired employee is the head of the linked list, update the head and free the old head.
    else if (prev == NULL)
    {
        *headLL = current->nextEmployee;
        free(current);
    }
    // If the desired employee is not the head of the linked list, update the prev and next pointers and free the old node.
    else
    {
        prev->nextEmployee = current->nextEmployee;

    }
      free(current);
}
