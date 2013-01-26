/* 
 * File:   IOTutorial.cpp
 * Author: libin
 *
 * Created on January 26, 2013, 10:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/*
 * 
 */
int main() {

    int x,y,sum;
    cout << "starting input:" <<endl;
    /*pay more attention to this code, it costs a lot of time to debug this issue!*/
    cin >> x >> y;
    sum = x+y;
    cout << "the sum value of " << x << "and the value of "<< y << " is: " << sum <<endl;
    return 0;
}

