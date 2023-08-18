0x10. C - Variadic functions

Variadic functions are functions that can take a variable number of 
arguments.
- a variadic function adds flexibility tothe program. It takes one fixed 
argument and then any number of arguments can be passed. 
the variadic function consists of at least one fixed variable and 
then an ellipsis (...) as the last parameter.

- must include the <stdargs.h> header which conntains all you need for 
a variadic function.
- fixed parameter int n or int args to count the number of variables 
arguments to pass.
- ... ellipsis to tell the function that we will accept variable arguments
- define a va_list macro (variable that is going to hold all the 
variables together, so that you're able to use them inside of a function
- va_arg must be used too (when you start your looping, so that you can 
get all the arguments passed into the function and also all the 
variable arguments that have been passed into the function
- va_start and va_end to begin and end argument list 
(va macros - va_start and va_end signify the starting and ending of the 
 argument list)
