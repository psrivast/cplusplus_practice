//
//  main.cpp
//  BloombergPractice
//
//  Created by Parag Srivastava on 6/4/16.
//  Copyright © 2016 Parag Srivastava. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    ofstream out("test_count.txt");
    out << "This is a test file with eight words!";
    out.close();
    
    ifstream in("test_count.txt");
    
    int word_count = 0;
    string word;
    while(in >> word) {
        word_count++;
    }
    cout << word_count << "\n";
    return 0;
}
