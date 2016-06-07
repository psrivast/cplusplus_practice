/* Exercise 6.2
 * Add a destructor that prints a message to say it has been called
 */

#include <iostream>
using namespace std;


class Simple {
public:
    Simple();
    ~Simple();
};

Simple::Simple(){
    cout << "Your simple class was created" << endl;
}

Simple::~Simple(){
    cout << "In Simple destructor..." << endl;
}

int main() {
    Simple s;
    return 0;
}
