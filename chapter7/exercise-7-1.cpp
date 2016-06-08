/* Exercise 7.1
 * Create a Text class that contains a string object to hold text of file
 * 2 constructors:
 *  - Default
 *  - Takes string as name of file to open
 */

#include <iostream>
#include <fstream>

using namespace std;

class Text {
public: 
    Text();
    Text(string fileName);
    string contents();
private:
    string content;
};

Text::Text() {}

Text::Text(string fileName) {
    ifstream fileStream(fileName);
    string str;
    while(getline(fileStream,str)){
        content += str;
        content.push_back('\n');
    }
    fileStream.close();
}

string Text::contents() {
    return content;
}

int main() {
    string my_file = "testfile.txt";
    Text my_text(my_file);
    cout << my_text.contents();
}
