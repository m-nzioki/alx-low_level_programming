0x0B. C - malloc, free

Project on dynamic memory allocation using malloc

MANDATORY TASKS

0-create_array.c - creates an array of chars, and initializes it with a specific char.
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails

1-strdup.c - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

The new string is a duplicate of the string str. 
Memory for the new string is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. 

2-str_concat.c - concatenates two strings.

The returned pointer points to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure

3-alloc_grid.c - returns a pointer to a 2 dimensional array of integers.
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL

4-free_grid.c -  frees a 2 dimensional grid previously created by your alloc_grid function.

ADVANCED TASKS

