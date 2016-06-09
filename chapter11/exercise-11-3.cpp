/* Exercise 11.3
 * (A) Create a reference that is not initialized when it is created
 * (B) Change a reference to refer to another object after initialization
 * (C) Create a NULL reference
 */

#include <iostream>

using namespace std;

int main() {
    
    int x = 0;    
    int y = 3;

    /* (A): not possible, refernce variable requires an initializer */
    //int& a;
    
    /* (B) */
    int& b = x;
    cout << "Reference b for x: " << b << endl;
    b = y;
    cout << "Reference b for y: " << b << endl;

    /* (C): not possible, cannot have NULL references but can 
       have null pointers*/
    //long& c = NULL;

    return 0;
}
