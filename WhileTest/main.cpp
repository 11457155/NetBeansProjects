/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 12:30 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

/* this function aims to calculating the add from 1 to 10 */
int iterationAdd()
{
    int sum = 0;
    int val = 1;
    cout << "before the initial sum is :" << sum <<endl;
    while(val <= 10)
    {
        sum = sum + val;
        ++val;
    }
    cout << "after the iteration add, the sum result is :" << sum <<endl;
}
int main(int argc, char** argv) {

    cout << "now, starting launching the iteration add functionality!" << endl;
    iterationAdd();
    return 0;
}

