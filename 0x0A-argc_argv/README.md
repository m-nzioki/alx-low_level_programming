0x0A. C - argc, argv

Explores the concepts of command line arguments;
argc, argv, using __attribute__((unused)) or (void) to compile functions with unused variables or parameters

Rules
The standard library is allowed
Your code should use the Betty style. 
It will be checked using betty-style.pl and betty-doc.pl

MANDATORY TASKS

0-whatsmyname.c - prints its name, followed by a new line.

1-args.c - prints the number of arguments passed into it.

2-args.c - prints all arguments it receives.

All arguments should be printed, including the first one
Only print one argument per line, ending with a new line

3-mul.c - multiplies two numbers.

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

4-add.c -  adds positive numbers.

Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored in an int

ADVANCED TASKS

100-change.c -  prints the minimum number of coins to make change for an amount of money.

Usage: ./change cents
where cents is the amount of cents you need to give back
if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
you should use atoi to parse the parameter passed to your program
If the number passed as the argument is negative, print 0, followed by a new line
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
