# The _printf() function was developed by cohort #18 students Omnia Ashraf & Maria Saeed.

#What is it?
----------

A README is a text file that introduces and explains a project. It contains information that is commonly required to understand what the project is about.

---------------

**_printf** - formatted output conversion

**#include "main.h"**
**int _printf(const char** *format* **, ...);**

## Description
-------------

The **_printf()** function produce output according to a *format* as described below. Also, write output to *stdout*, the standard output stream.

The  **_printf()** function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of ***stdarg(3)*** are converted for output.

### Format of the format string
---------------

The format string is a character string, beginning and ending inits  initial shift state, if any. The format string is composed of zero or more  directives:  ordinary  characters  (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
Each conversion specification is introduced by the character % and ends with conversion specifier.

### Conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:
-  **d, i**: The **_int_** argument should be signed decimal notation, and the resulting number is written.
-  **c**: The **_int_** argument is converted to a char, and the resulting character is written.
-  **s**: The **_const char_** * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up  to  (but not including) a terminating null byte ('\0').
- **%**: A '**%**' is written. No argument is converted. The complete conversion specification is '**%%**'.


####Introduction
---------------

Betty style is a set of guidelines for writing clean, readable, and maintainable code. It includes conventions for naming variables, functions, and other programming elements, as well as guidelines for formatting code, commenting, and organizing code structure. Following Betty style can make your code more understandable to others, reduce errors, and make it easier to modify and maintain your code over time. It's named after Betty Holberton, one of the original programmers of the ENIAC computer and a pioneer in software engineering.

-------------------------


####Why is Betty Style Important?
-----------------

Following Betty style can make your code more understandable and maintainable. It can also make it easier to work in a team environment, where different programmers may be working on the same codebase. When all members of a team adhere to the same coding conventions, it's easier to understand and modify each other's code. Additionally, following Betty style can help reduce errors and improve code quality.

----------------------


#### Compilation:alembic:
------------


The code must be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic *.c*

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h): *#include main.h*

------------
