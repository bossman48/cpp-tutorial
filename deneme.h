//g++ version is Apple clang version 13.1.6 (clang-1316.0.21.2.3)
#include <exception>
#include <csignal>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
#include <pthread.h>
//function-like macros
#define MIN(a,b) (((a)<(b)) ? a : b)


const int  CONSTLENGTH = 10;

// this variable value can change by anything 
volatile int  CONSTLENGTH2 = 10;

int amount=10;

//not working 
//auto int amount2=20;

//restrcit is not working
//restrict int  CONSTLENGTH3 = 10;
#include "box.h"

void printingSizeOfVariables();
void typeDefFunc();
void enumTypeDefFunc();
void loops();
void decisionMaking();
int sum(int a, int b = 20);

void swap(int x, int y);
void swap2(int *x, int *y);
void swap3(int &x, int &y);

void arrayPointerExample();

void myFunction(int *param);
void myFunction2(int param[10]);
void myFunction3(int param[]);
void pointerFunction1();
void pointerFunction2();
void pointerFunction3();
void pointerFunction4();
void pointerFunction5();
int * getRandom( );
double getAverage(int *arr, int size);
void referenceFunction();
void referenceFunctionReturnExample();
void cinExample();
void structExampleFunction();
void printBook( struct Books *book );
void classObjectExample();
typedef int feet;

Box box1;

void inheritenceExample();

void overloadingExample();

void polymorphismExample();

void nameSpaceExample();

void templateExample();

void functionLikeMacrosExample();

void macrosExampleFucntion();
enum color { red, green, blue ,pink=8,black} c;

extern int a, b;

int a2[3][4] = {
{0, 1, 2, 3} , /* initializers for row indexed by 0 */
{4, 5, 6, 7} , /* initializers for row indexed by 1 */
{8, 9, 10, 11} /* initializers for row indexed by 2 */
};

double division(int a, int b);
void tryCatchExample();

struct MyException : public exception {
   const char * what () const throw () {
      return "C++ Exception";
   }
};

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}

template <typename T>
inline T const& Max (T const& a, T const& b) { 
   return a < b ? b:a; 
}

/*
Special characters

\\	\ character
\'	' character
\"	" character
\?	? character
\a	Alert or bell
\b	Backspace
\f	Form feed
\n	Newline
\r	Carriage return
\t	Horizontal tab
\v	Vertical tab
\ooo	Octal number of one to three digits
\xhh . . .	Hexadecimal number of one or more digits

*/

/*

Logic operations 
Assume if A = 60; and B = 13; now in binary format they will be as follows −

A = 0011 1100

B = 0000 1101


&	Binary AND Operator copies a bit to the result if it exists in both operands.	(A & B) will give 12 which is 0000 1100
|	Binary OR Operator copies a bit if it exists in either operand.	(A | B) will give 61 which is 0011 1101
^	Binary XOR Operator copies the bit if it is set in one operand but not both.	(A ^ B) will give 49 which is 0011 0001
~	Binary Ones Complement Operator is unary and has the effect of 'flipping' bits.	(~A ) will give -61 which is 1100 0011 in 2's complement form due to a signed binary number.
<<	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.	A << 2 will give 240 which is 1111 0000
>>	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.	A >> 2 will give 15 which is 0000 1111

*/

/* 


some must to know.

1	
sizeof

sizeof operator returns the size of a variable. For example, sizeof(a), where ‘a’ is integer, and will return 4.

2	
Condition ? X : Y

Conditional operator (?). If Condition is true then it returns value of X otherwise returns value of Y.

3	
,

Comma operator causes a sequence of operations to be performed. The value of the entire comma expression is the value of the last expression of the comma-separated list.

4	
. (dot) and -> (arrow)

Member operators are used to reference individual members of classes, structures, and unions.

5	
Cast

Casting operators convert one data type to another. For example, int(2.2000) would return 2.

6	
&

Pointer operator & returns the address of a variable. For example &a; will give actual address of the variable.

7	
*

Pointer operator * is pointer to a variable. For example *var; will pointer to a variable var.

*/

/* math operations
1	
double cos(double);

This function takes an angle (as a double) and returns the cosine.

2	
double sin(double);

This function takes an angle (as a double) and returns the sine.

3	
double tan(double);

This function takes an angle (as a double) and returns the tangent.

4	
double log(double);

This function takes a number and returns the natural log of that number.

5	
double pow(double, double);

The first is a number you wish to raise and the second is the power you wish to raise it t

6	
double hypot(double, double);

If you pass this function the length of two sides of a right triangle, it will return you the length of the hypotenuse.

7	
double sqrt(double);

You pass this function a number and it gives you the square root.

8	
int abs(int);

This function returns the absolute value of an integer that is passed to it.

9	
double fabs(double);

This function returns the absolute value of any decimal number passed to it.

10	
double floor(double);

Finds the integer which is less than or equal to the argument passed to it.

*/

/* string 

1	
strcpy(s1, s2);

Copies string s2 into string s1.

2	
strcat(s1, s2);

Concatenates string s2 onto the end of string s1.

3	
strlen(s1);

Returns the length of string s1.

4	
strcmp(s1, s2);

Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.

5	
strchr(s1, ch);

Returns a pointer to the first occurrence of character ch in string s1.

6	
strstr(s1, s2);

Returns a pointer to the first occurrence of string s2 in string s1.

*/

/*time 

1	
time_t time(time_t *time);

This returns the current calendar time of the system in number of seconds elapsed since January 1, 1970. If the system has no time, .1 is returned.

2	
char *ctime(const time_t *time);

This returns a pointer to a string of the form day month year hours:minutes:seconds year\n\0.

3	
struct tm *localtime(const time_t *time);

This returns a pointer to the tm structure representing local time.

4	
clock_t clock(void);

This returns a value that approximates the amount of time the calling program has been running. A value of .1 is returned if the time is not available.

5	
char * asctime ( const struct tm * time );

This returns a pointer to a string that contains the information stored in the structure pointed to by time converted into the form: day month date hours:minutes:seconds year\n\0

6	
struct tm *gmtime(const time_t *time);

This returns a pointer to the time in the form of a tm structure. The time is represented in Coordinated Universal Time (UTC), which is essentially Greenwich Mean Time (GMT).

7	
time_t mktime(struct tm *time);

This returns the calendar-time equivalent of the time found in the structure pointed to by time.

8	
double difftime ( time_t time2, time_t time1 );

This function calculates the difference in seconds between time1 and time2.

9	
size_t strftime();

This function can be used to format date and time in a specific format.

*/


/* input / output

1	
<iostream>

This file defines the cin, cout, cerr and clog objects, which correspond to the standard input stream, the standard output stream, the un-buffered standard error stream and the buffered standard error stream, respectively.

2	
<iomanip>

This file declares services useful for performing formatted I/O with so-called parameterized stream manipulators, such as setw and setprecision.

3	
<fstream>

This file declares services for user-controlled file processing. We will discuss about it in detail in File and Stream related chapter.

*/


/* file stream

1	
ios::app

Append mode. All output to that file to be appended to the end.

2	
ios::ate

Open a file for output and move the read/write control to the end of the file.

3	
ios::in

Open a file for reading.

4	
ios::out

Open a file for writing.

5	
ios::trunc

If the file already exists, its contents will be truncated before opening the file.

*/


/* predefined macros

Sr.No	Macro & Description
1	
__LINE__

This contains the current line number of the program when it is being compiled.

2	
__FILE__

This contains the current file name of the program when it is being compiled.

3	
__DATE__

This contains a string of the form month/day/year that is the date of the translation of the source file into object code.

4	
__TIME__

This contains a string of the form hour:minute:second that is the time at which the program was compiled.

*/

void signalHandler( int signum );

void signalFunctionExample();


/* multithread

Sr.No	Parameter & Description
1	
thread

An opaque, unique identifier for the new thread returned by the subroutine.

2	
attr

An opaque attribute object that may be used to set thread attributes. You can specify a thread attributes object, or NULL for the default values.

3	
start_routine

The C++ routine that the thread will execute once it is created.

4	
arg

A single argument that may be passed to start_routine. It must be passed by reference as a pointer cast of type void. NULL may be used if no argument is to be passed.

*/

void *PrintHello(void *threadarg);

void multithreadExample();
