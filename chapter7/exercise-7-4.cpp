/* Exercise 7.4
 * Create class with 4 member functions(with 0,1,2,3 int arguments)
 * Replace them with a single function that defaults the arguments
 * Do you have to change the main funciton - NO 
 */

#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass();

    // No defaulting
    /*
    void fun() {}
    void fun(int a) {}
    void fun(int a, int b) {}
    void fun(int a, int b, int c) {}
    */

    // Arguments Defaultes
    void fun(int a=1, int b=2, int c=3) {}
};

MyClass::MyClass() {}

//void MyClass::fun(int a=1, int b=2, int c=3) {}

int main() {
    MyClass mc;
    mc.fun();
    mc.fun(1);
    mc.fun(1,2);
    mc.fun(1,2,3);

    return 0;
}
