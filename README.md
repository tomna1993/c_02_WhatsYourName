c_02_WhatsYourName
========================

## DESCRIPTION

In this program I ask the user's name then greet him.

For this program the cs50 library should be installed in the compiler so we can use the prewritten and 
easy to use cs50 functions. 

> #include <cs50.h>

We have to include the cs50.h header file which contains the function to get a string written in the terminal
when we run the code.

> string name 

Here we declare a variable were we will save the user input.

> get_string("What's your name? ")

With this function we print the "What's your name?" question and wait for the user to write its name then push enter.
We get the user's name as a string and save it in the **name** variable. 

> printf("Hello, %s", name);

We can give more arguments to the printf function. In this example we give it a string and a variable. 
The arguments are separeted by a comma ",". 

**%s** is used to format a variable. The below formattings can be used:

| Specifier	| Used for	|
|-----------|-----------|
| %c		| a single character |
| %s		| a string |
| %hi		| short (signed) |
| %hu		| short (unsigned) |
| %Lf		| long double |
| %n		| prints nothing |
| %d		| a decimal integer (assumes base 10) |
| %i		| a decimal integer (detects the base automatically) |
| %o		| an octal (base 8) integer |
| %x		| a hexadecimal (base 16) integer |
| %p		| an address (or pointer) |
| %f		| a floating point number for floats |
| %u		| int unsigned decimal |
| %e		| a floating point number in scientific notation |
| %E		| a floating point number in scientific notation |
| %%		| the % symbol |

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:   
  	> cd ./libsc50/src

2. Compile the cs50.c source into .o with:
	> gcc -c cs50.c -o cs50.o

3. Make the library archive:  
  	> ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
