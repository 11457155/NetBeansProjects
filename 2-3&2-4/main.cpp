/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 9:27 AM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 * Exercise 2.3: If a short on a given machine has 16 bits then what is the largest 
 * number that can be assigned to a short? To an unsigned short?
 *
 * Exercise 2.4: What value is assigned if we assign 100,000 to a 16-bit unsigned 
 * short? What value is assigned if we assign 100,000 to a plain 16-bit short?
 */

void BuildInTypeTest()
{
    short sVal = 0;
    unsigned short usVal = 0;
    
    cout << "Testing the largest scope of short type value. " << endl;
    
    sVal = 2 * 2 * 2 * 2 * 2 * 2  * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2;
    //sVal = pow(2,15);
    
    cout << "the initial signed short max value is:" << sVal << endl;
    sVal -= 1;
    cout << "and the corrected signed short max value is:" << sVal << endl;
    
    
    
    usVal = 2 * 2 * 2 * 2 * 2 * 2 * 2  * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2; 
    //usVal = pow(2,16) + 1;
    
    cout << "the initial unsigned short max value is:" << usVal << endl;
    
    usVal -= 1;
    
    cout << "the corrected unsigned short max value is:" << usVal << endl;
    
    usVal = 100000;
    
    cout << "when assign 100000 to an unsigned short val. the result is: " << usVal << endl;
}
int main(int argc, char** argv) {

    cout << "start Exercise 2-3&2-4" << endl;
    BuildInTypeTest();
    return 0;
}

