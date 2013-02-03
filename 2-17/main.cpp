/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 2:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * Exercise 2.17:	What are the initial values, if any, of each of the 
 * following variables?
 */
string globalString;
int globalVal;
int main(int argc, char** argv) {

    string localString;
    int localVal;
    
    cout << "starting Exercise 2-17" << endl;
    /* the default string variables are set to "" */
    cout << "the global string value is: " << globalString << endl;
    cout << "the local string value is: " << localString << endl;
    
    /* the default global build-in default variablea are set to 0, whereas the 
     build-in variables within a function will not be initialized by compiler */
    cout << "the global int value is: " << globalVal << endl;
    cout << "the local int value is: " << localVal << endl;
    return 0;
}

