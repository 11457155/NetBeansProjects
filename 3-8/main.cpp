/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 10:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * Exercise 3.8: Write a program to read strings from the standard input, concatenating 
 * what is read into one large string. Print the concatenated string. Next, 
 * change the program to separate adjacent input strings by a space.
 */
void stringConcatenated()
{
    string input, finalStr;
    cout << "please starting input the strings " << endl;
    
    while (cin >> input)
    {
        finalStr +=  input;
    }
    cout << "the concatenated string is: " << finalStr << endl;
}

void stringConcatenatedWithSpace()
{
    string input, finalStr;
    cout << "please starting input the initial strings " << endl;
    cin >> finalStr;
    
    while(cin >> input)
    {
        finalStr =  finalStr + " " + input;
    }

    cout << "the concatenated string with space is: " << finalStr << endl;
}
int main(int argc, char** argv) {

    cout << "now starting Exercise 3-8" << endl;
    stringConcatenated();
    stringConcatenatedWithSpace();
    
    return 0;
}

