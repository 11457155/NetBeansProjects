/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 3:52 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int addFunction()
{
    cout << "now starting add, please let the user input the desired data:" << endl;
    int inputVal1, inputVal2;
    int sum = 0;
    int lower, higher;
    
    cin >> inputVal1 >> inputVal2;
    
    if(inputVal1 > inputVal2)
    {
        lower = inputVal2;
        higher = inputVal1;
    }
    
    else if(inputVal1 < inputVal2)
    {
        lower = inputVal1;
        higher = inputVal2;
    }
    
    /* in case there are 2 equal inputs, then this program will word unexpectedly */
    for(int i = lower; i <= higher; ++i)
    {
        sum += i;
    }
    
    return sum;
}
int main(int argc, char** argv) {

    cout << "starting the add function" << endl;
    cout << "the result is:" << addFunction() << endl;
    return 0;
}

