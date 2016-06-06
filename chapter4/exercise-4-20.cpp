/* Exercise 4.20: How big is a structure? 
 * Write a piece of code that prints the size of various structures. 
 * Create structures that have data members only and ones that have data 
 * members and function members. 
 * Then create a structure that has no members at all. Print out the sizes 
 * of all these. Explain the reason for the result of the structure with 
 * no data members at all. 
 */

#include <iostream>

using namespace std;

struct data_members_only {
    int a;
    float b[10];
};

struct all_members {
    int a;
    float b[10];
    void f();
};

void all_members::f() {
    int *a = new int;
}

struct no_members {};

int main() {
    cout << "size of data_members_only = \t" << sizeof(data_members_only) << " bytes" << endl;
    cout << "size of all_members = \t" << sizeof(all_members) << " bytes" << endl;

    // This struct is of size 1 since it ia an object and every object
    // needs to have a unique address 
    cout << "size of no_members = \t" << sizeof(no_members) << " bytes" << endl;
}
