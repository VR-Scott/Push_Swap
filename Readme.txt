Push_Swap

This project consists of two programs, create by running "Make all".

push_swap program:

This program takes as an argument or individual arguments, 
a list of integers and prints out the instructions (separated by a '\n') to sort the list in ascending order.

In the case of an error the program displays "Error" followed by a '\n' on standard error.
Errors include for example: 
-some arguments aren't integer,
-some arguments are higher or than Max int or lower or than Min int,
-there are duplicates.

The instructions to be used by program are:
sa : swap a - swap the first 2 elements at the top of stack a.
sb : swap b - swap the first 2 elements at the top of stack b.
ss : sa and sb at the same time.
pa : push a - take the first element at the top of b and put it at the top of a.
pb : push b - take the first element at the top of a and put it at the top of b.
ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
rrr : rra and rrb at the same time.

The goals for the program are to sort:
- 3 integers in less than 4 instructions,
- 5 integers in less than 13 instructions,
- 100 integers in less than 700 instructions,
- 500 integers in less than 5500 instructions.

checker program:

This program takes as an argument or individual arguments, a list of integers.
Checker will then wait and read instructions on the standard input.
Once all the instructions have been read, checker will execute them on the list of integers.

If after execution those instructions, stack a is actually sorted and b is empty then checker displays
"OK" followed by a '\n' on the standard output.
In every other case, checker displays "KO" followed by a '\n' on the standard otput.
In case of error "Error" followed by a '\n' on the standard error.
Errors include for example: 
-some arguments aren't integer,
-some arguments are higher or than Max int or lower or than Min int,
-there are duplicates.
-an instruction doesn't exist and/or is incorrectly formatted.

Both programs can be used together as follows:

ARG = " the list of integers"; ./push_swap $ARG | ./checker $ARG
