/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 9:04 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

/*
 * Exercise 3.7: Write a program to read two strings and report whether the strings 
 * are equal. If not, report which of the two is the larger. Now, change the program 
 * to report whether the strings have the same length and if not report which is longer.
 */

void judgeString()
{
    string input1, input2;
    cout << "now start inputing the string for comparing which one is larger" << endl;
    cin >> input1 >> input2;
    
    if(input1 == input2)
    {
        cout << "these two input are equal" << endl;
    }
    else if(input1 > input2)
    {
        cout << "input1 is larger" << endl;
    }
    else
        cout << "input2 is larger" << endl;
}

void judgeStringSize()
{
    cout << "now starting comparing the input string size" << endl;
    string input1, input2;
    cin >> input1 >> input2;
    
    if(input1.size() == input2.size())
    {
        cout << "these two input are equal" << endl;
    }
    else if(input1.size() > input2.size())
    {
        cout << "input1's size is longer" << endl;
    }
    else
        cout << "input2's size is longer" << endl;
}
int main(int argc, char** argv) {

    cout << "starting Exercise 3-7" << endl;
    judgeString();
    judgeStringSize();
    return 0;
}

