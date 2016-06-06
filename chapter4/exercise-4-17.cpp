/* Exercise 4.17: Dynamically create pieces of storage of the following types, 
 * using new: int, long, an array of 100 chars, an array of 100 floats. 
 * Print the addresses of these and then free the storage using delete.
 */

#include <iostream>

using namespace std;

int main() {
    int *a = new int(3);
    long *b = new long;
    char *c = new char[100];
    float *d = new float[100];

    cout << "a(int): \t" << (long)a << "\n";
    cout << "b(long): \t" << (long)b << "\n"; 
    cout << "c(char arr): \t" << (long)c << "\n";
    cout << "d(float arr): \t" << (long)d << "\n";

    delete a;
    delete b;
    delete []c;
    delete []d;

    return 0;
}
