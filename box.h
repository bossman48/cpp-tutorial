#pragma once
#include <iostream> 
using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box

      friend void printWidth( Box box );

      Box();
      ~Box();
      Box(int val);
      double getVolume(void);
      int getVal();
      void setVal(int i);
    private:
      int val;
};


// inheritence example
//inheritence: kalıtım
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};





/*
inheritence
Rectange
--------------------------------------------------
|                                                |
| Shape                                          |
| -------------                                  |
||            |                                  |
||            |                                  |
||            |                                  |
||            |                                  |
| -------------                                  |
|                                                |
|                                                |
|                                                |
--------------------------------------------------s
*/


//overloadingg example
class PrintData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};


//polymorphism: çok biçimlilik

class Shape2 {
   protected:
      int width, height;
      
   public:
      Shape2( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      //not work polymorphism
      /*int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }*/

      //work polymorphism
      virtual int area() {
        cout << "Parent class area :" <<endl;
        return 0;
        }
};
class Rectangle2: public Shape2 {
   public:
      Rectangle2( int a = 0, int b = 0):Shape2(a, b) { }
      
      int area () {
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle2: public Shape2 {
   public:
      Triangle2( int a = 0, int b = 0):Shape2(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};


class Adder {
   public:
      // constructor
      Adder(int i = 0) {
         total = i;
      }
      
      // interface to outside world
      
      void addNum(int number) {
         total += number;
      }
      
      // interface to outside world
      //abstraction
      int getTotal() {
         return total;
      };
      
   private:
      // hidden data from outside world
      //data encapsulation
      int total;
};
