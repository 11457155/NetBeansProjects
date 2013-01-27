/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 4:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Write a program to print the larger of two inputs supplied by the user.
 */
int printLargerInput()
{
    int val1, val2;
    cout << "starting input from user." << endl;
    cin >> val1 >> val2;
    
    if(val1 == val2)
    {
        return val1;
    }
    
    else if(val1 > val2)
    {
        return val1;
    }
    
    else
        return val2;
}
int main(int argc, char** argv) {

    cout << "the desired result from the user is: " << printLargerInput() << endl;
    return 0;
}

