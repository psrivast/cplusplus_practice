/* Exercise 6.2
 * Add a destructor that prints a message to say it has been called
 */

#include <iostream>
using namespace std;


class Simple {
public:
    Simple(int num);
    ~Simple();
private:
    int number;
};

Simple::Simple(int num){
    number = num;
    cout << "Simple class created..." << endl;
    cout << "Number is: " << number << endl;
}

Simple::~Simple(){
    cout << "In Simple destructor..." << endl;
    cout << "Number is: " << number << endl;
}

int main() {
    Simple s(3);
    return 0;
}
