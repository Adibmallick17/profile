#include "../include/headerA3.h"

int countEmployees(a3Emp *headLL)
{
    int count = 0;
    struct employee *current = headLL;
    // Traverse the linked list and increment count for each employee.
    while (current != NULL)
    {
        count++;
        current = current->nextEmployee;
    }
    // Print the total number of employees.
    printf("Total number of employees = %d\n", count);
    return count;
}