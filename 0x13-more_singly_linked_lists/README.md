0x13. More Singly Linked Lists
Project Overview
This project is part of the ALX low level programming series, focusing on advanced manipulations of singly linked lists in C. It covers various operations such as adding, removing, and modifying nodes in a singly linked list data structure.

Learning Objectives
Understand and implement singly linked lists in C.
Develop functions to manipulate linked list data structures.
Adhere to coding standards and best practices in C programming.
Requirements
Allowed editors: vi, vim, emacs.
All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
All files should end with a new line.
Code should use the Betty style for checking.
No use of global variables.
No more than 5 functions per file.
Allowed C standard library functions: malloc, free, and exit. Functions like printf, puts, calloc, realloc etc., are forbidden.
You are allowed to use _putchar.
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h.
All your header files should be include guarded.
Data Structure
For this project, the following data structure is used for singly linked lists:

c
Copy code
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
Tasks
Print list: A function that prints all the elements of a listint_t list.
List length: A function that returns the number of elements in a linked listint_t list.
Add node: A function that adds a new node at the beginning of a listint_t list.
Add node at the end: A function that adds a new node at the end of a listint_t list.
Free list: A function that frees a listint_t list.
Free list (advanced): A function that frees a listint_t list and sets the head to NULL.
Pop: A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Get node at index: A function that returns the nth node of a listint_t linked list.
Sum list: A function that returns the sum of all the data (n) of a listint_t linked list.
Insert: A function that inserts a new node at a given position.
Delete at index: A function that deletes the node at index index of a listint_t linked list.
Compilation and Testing
Files are compiled with:

sh
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [output_name]
Replace [output_name] with your desired output file name.

Author
Clinton Nwokocha


