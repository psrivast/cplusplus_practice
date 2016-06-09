/* Exercise 11.4
 * Write a function that takes a pointer argument, 
 * modifies what it points to,
 * and returns destination of the pointer as a refernce
 */

#include <iostream>

using namespace std;

int& pointer_machine(int* p) {
    (*p)++;
    return *p;
}

int main () {
    int x = 3;
    int* xp = &x;    
    int& ref = pointer_machine(xp);
    cout << ref << endl;
    
    return 0;
}
