/*
 *  Exercise 2.5: Change FillVector.cpp so that it prints the lines backwards from last to first
 */

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  ifstream in("testfile.txt");
  string line;
  while(getline(in, line))
    v.push_back(line); // Add the line to the end
  // Add line numbers:
  for(int i = v.size()-1; i >= 0; i--)
    cout << i << ": " << v[i] << endl;
} ///:~
