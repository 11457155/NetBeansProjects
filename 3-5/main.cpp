/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 8:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * Exercise 3.5: Write a program to read the standard input a line at a time. 
 * Modify your program to read a word at a time.
 */

void readStringInput()
{
    string lineInput;
    string wordInput;
    string test;
   
    cout << "now starting output the string word by word! and the value is: " << endl;
    
    if(getline(cin, wordInput))
    {
        cout << wordInput << endl;
    }
    
    cout << "now input the same string as the previous one " << endl;
    cin >> test;
    
    if(wordInput == test)
    {
        cout << "true" << endl;
    }
    else
         cout << "false" << endl;
    
   
  
    #if 0 
    cout << "the line input string is: " << endl;
    while(cin >> lineInput)
    {
        cout << lineInput;
    }
    #endif
}
int main(int argc, char** argv) {

    cout << "now, starting 3-5" << endl;
    readStringInput();
    
    return 0;
}

