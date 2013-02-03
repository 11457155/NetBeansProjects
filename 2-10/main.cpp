/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 11:06 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Exercise2.10: Using escape sequences,write a program to print 2M followed by a 
 * new line. Modify the program to print 2, then a tab, then an M, followed by a newline.
 */

void printRequired2M()
{
    cout << "start printing the first output." << endl;
    cout  << "2M \n";
    
    cout << "start printing the second output."<< endl;
    cout << "2 \t\
M\n";
    cout << "this is the end of the program." << endl;
}

int main(int argc, char** argv) {

    cout << "starting Exercise 2-10" << endl;
    printRequired2M();
    
    return 0;
}

