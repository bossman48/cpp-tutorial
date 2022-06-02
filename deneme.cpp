//src: https://www.tutorialspoint.com/cplusplus/index.htm

#include <iostream>
#include "deneme.h"

using namespace std;

// main() is where program execution begins.
int main() {
   cout << "Hello World"<<NEWLINE; // prints Hello World
   printingSizeOfVariables();
   typeDefFunc();
   enumTypeDefFunc();

   loops();

   decisionMaking();
   //try extern keyword
   int a = 100;
   int b = 200;
   //call by value function example
   swap(a, b);

   //call by pointer function example
   swap2(&a, &b);

   //call by reference function example
   swap3(a, b);
   
   //call function
   a = sum(a, b);

   //array pointer example
   arrayPointerExample();
   
   pointerFunction1();

   pointerFunction2();
   
   pointerFunction3();

   pointerFunction4();

   pointerFunction5();

   referenceFunction();

   referenceFunctionReturnExample();

   /* input example
   cinExample();
   */
   cout<<endl;
   structExampleFunction();
   /***********************************/
   // you must use g++ deneme.cpp and box.cpp  //
   /***********************************/
   classObjectExample();

   box1.setVal(24);
   cout<<box1.getVal()<<endl;
   // calling a function again as follows.
   //a = sum(a);

   inheritenceExample();

   //overloading example
   //cannot run this code
   //overloadingExample();

   //polymorphism examples
   polymorphismExample();

   //try catch example
   tryCatchExample();

   //namespace example
   nameSpaceExample();

   //template example
   templateExample();

   //function-like macros
   functionLikeMacrosExample();

   //macros example
   macrosExampleFucntion();

   //signal example
   signalFunctionExample();

   //multithread example
   multithreadExample();
   //try to change constant variable
   //cannot do this
   //CONSTLENGTH=9;




   return 0;
}




void printingSizeOfVariables(){
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}

void typeDefFunc(){
    feet distance=2;
    cout<<"Feet example decleration"<<distance<<endl;
}

void enumTypeDefFunc(){
    c = blue;
   cout<<c<<endl;
   c = black;
   cout<<c<<endl;
}

void loops(){
    static int k=0;
    for(int i=0;i>1;i++){

    }
    do{
        goto LOOP;
        if(k>100){
            break;
        }
        else{
            continue;
        }
    }while(k>100);

    LOOP:while(k>100){

    }

    /*
    nested loops:
    one or more loops in another loop
    for(){
        for()[

        ]
    }
    */
}


void decisionMaking(){
    int i=0;
    if(i==0){

    }
    else{

    }

    switch (i)
    {
    case 1:
        break;
    case 2:
        break;
    
    default:
        break;
    }
}

//call by value  function example
void swap(int x, int y) {
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

//call by pointer funcion example
void swap2(int *x, int *y) {
   int temp;
   temp = *x; /* save the value at address x */
   *x = *y; /* put y into x */
   *y = temp; /* put x into y */
  
   return;
}

// call by reference function example
void swap3(int &x, int &y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

//not working
int sum(int a, int b /*int bb = 20*/) {
   return (a+b);
}


void arrayPointerExample(){
    // an array with 5 elements.
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;

   p = balance;
 
   // output each array element's value 
   cout << "Array values using pointer " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   cout << "Array values using balance as address " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(balance + " << i << ") : ";
      cout << *(balance + i) << endl;
   }
 

}
//array pointer function argument
void myFunction(int *param) {

}

void myFunction2(int param[10]) {

}

void myFunction3s(int param[]) {

}


//string


void pointerFunction1(){
    
    int  *ptr = NULL;
    cout << "The value of ptr is " << ptr ;

    int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable 

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
}

//this usage is come with this output
//*(var + 2) = 500;

void pointerFunction2(){
    int  var[3] = {10, 100, 200};
   int  *ptr;

   // let us have array address in pointer.
   ptr = var;
   
   for (int i = 0; i < 3; i++) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the next location
      ptr++;
   }
}

void pointerFunction3(){
    int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   // take the address of var
   ptr = &var;

   // take the address of ptr using address of operator &
   pptr = &ptr;

   // take the value using pptr
   cout << "Value of var :" << var << endl;
   cout << "Value available at *ptr :" << *ptr << endl;
   cout << "Value available at **pptr :" << **pptr << endl;
}

void pointerFunction4(){
    // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;
 
   // output the returned value 
   cout << "Average value is: " << avg << endl; 
    
}

void pointerFunction5(){
    // a pointer to an int.
   int *p;
 
   p = getRandom();
   for ( int i = 0; i < 10; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
}

double getAverage(int *arr, int size) {
   int i, sum = 0;       
   double avg;          
 
   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;
 
   return avg;
}

int * getRandom( ) {
   static int  r[10];
 
   // set the seed
   srand( (unsigned)time( NULL ) );
   
   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
      cout << r[i] << endl;
   }
 
   return r;
}


//references
//go to line 159 swap3(int &x, int &y);

void referenceFunction(){
   // declare simple variables
   int    i;
   double d;
 
   // declare reference variables
   int&    r = i;
   double& s = d;
   
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
 
   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << s  << endl;
}


double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
 
double& setValues( int i ) {
   return vals[i];   // return a reference to the ith element
}

void referenceFunctionReturnExample(){
   cout <<endl<< "Value before change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
 
   setValues(1) = 20.23; // change 2nd element
   setValues(3) = 70.8;  // change 4th element
 
   cout << "Value after change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
}

void cinExample(){
   char name[50];
 
   cout << "Please enter your name: ";
   cin >> name;
   cout << "Your name is: " << name << endl;
}

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

typedef struct {
char title[50];
char author[50];
char subject[100];
int book_id;
} Books2;

void structExampleFunction(){
   struct Books Book1;        // Declare Book1 of type Book
   struct Books Book2;        // Declare Book2 of type Book

   Books2 Book21, Book22;
   // Book 1 specification
   strcpy( Book1.title, "Learn C++ Programming");
   strcpy( Book1.author, "Chand Miyan"); 
   strcpy( Book1.subject, "C++ Programming");
   Book1.book_id = 6495407;

   // Book 2 specification
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Yakit Singha");
   strcpy( Book2.subject, "Telecom");
   Book2.book_id = 6495700;
 
   // Print Book1 info, passing address of structure
   printBook( &Book1 );

   // Print Book1 info, passing address of structure
   printBook( &Book2 );
}

// This function accept pointer to structure as parameter.
void printBook( struct Books *book ) {
   cout << "Book title : " << book->title <<endl;
   cout << "Book author : " << book->author <<endl;
   cout << "Book subject : " << book->subject <<endl;
   cout << "Book id : " << book->book_id <<endl;
}

void classObjectExample(){
   
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;

   cout<<"Volume: "<<Box1.getVolume();

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
}


//inheretance


void inheritenceExample(){
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
}

/*
void overloadingExample()[
   PrintData pd;
 
   // Call print to print integer
   pd.print(5);
   
   // Call print to print float
   pd.print(500.263);
   
   // Call print to print character
   pd.print("Hello C++");
]*/


void polymorphismExample(){
   
   Shape2 *shape;
   Rectangle2 rec(10,7);
   Triangle2  tri(10,5);

   // store the address of Rectangles
   shape = &rec;
   
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   shape->area();
}

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

void tryCatchExample(){
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cerr << msg << endl;
   }

   try {
      throw MyException();
   } catch(MyException& e) {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;
   } catch(std::exception& e) {
      //Other errors
   }
}

void nameSpaceExample(){
   // Calls function from first name space.
   first_space::func();
   
   // Calls function from second name space.
   second_space::func();
}

void templateExample(){
   int i = 39;
   int j = 20;
   cout << "Max(i, j): " << Max(i, j) << endl; 

   double f1 = 13.5; 
   double f2 = 20.7; 
   cout << "Max(f1, f2): " << Max(f1, f2) << endl; 

   string s1 = "Hello"; 
   string s2 = "World"; 
   cout << "Max(s1, s2): " << Max(s1, s2) << endl; 
}

void functionLikeMacrosExample(){
   
   int i, j;
   
   i = 100;
   j = 30;
   
   cout <<"The minimum is " << MIN(i, j) << endl;

}

#ifndef NULL
#define NULL 0
#endif

#ifdef DEBUG
cerr <<"Variable x = " << x << endl;
#endif


#if 0
code prevented from compiling
#endif

#define MKSTR( x ) #x
#define concat(a, b) a ## b

void macrosExampleFucntion(){
   cout << MKSTR(HELLO C++) << endl;

   int xy = 100;
   
   cout << concat(x, y)<<endl;

   cout << "Value of __LINE__ : " << __LINE__ << endl;
   cout << "Value of __FILE__ : " << __FILE__ << endl;
   cout << "Value of __DATE__ : " << __DATE__ << endl;
   cout << "Value of __TIME__ : " << __TIME__ << endl;
}


void signalHandler( int signum ) {
   cout << "Interrupt signal (" << signum << ") received.\n";

   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
}

void signalFunctionExample(){
   int i = 0;
   // register signal SIGINT and signal handler  
   signal(SIGINT, signalHandler);  

   while(++i) {
      cout << "Going to sleep...." << endl;
      if( i == 3 ) {
         raise( SIGINT);
      }
      //sleep(1);
   }
}

//compile with  g++ deneme.cpp box.cpp -lpthread
//multi thread 
#define NUM_THREADS 5

struct thread_data {
   int  thread_id;
   char *message;
};

void *PrintHello(void *threadarg) {
   struct thread_data *my_data;
   my_data = (struct thread_data *) threadarg;

   cout << "Thread ID : " << my_data->thread_id ;
   cout << " Message : " << my_data->message << endl;

   pthread_exit(NULL);
}

void multithreadExample(){
   pthread_t threads[NUM_THREADS];
   struct thread_data td[NUM_THREADS];
   int rc;
   int i;

   for( i = 0; i < NUM_THREADS; i++ ) {
      cout <<"main() : creating thread, " << i << endl;
      td[i].thread_id = i;
      td[i].message = "This is message";
      rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&td[i]);
      
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}
