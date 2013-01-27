/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 3:39 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
/* function for adding functionality */
int addFuncition()
{
    int inputVal1, inputVal2;
    int lower, higher;
    int sum = 0;
    
    cout << "users start to input the desired data for adding: " << endl;
    cin >> inputVal1 >> inputVal2;
    
    if(inputVal1 == inputVal2)
    {
        sum += inputVal1;
    }    
    else if(inputVal1 > inputVal2)
    {
        lower   = inputVal2;
        higher  = inputVal1;      
    } 
    else if(inputVal1 < inputVal2)
    {
        lower   = inputVal1;
        higher  = inputVal2;  
    }
    
    for(int i = lower; i <= higher; ++i)
    {
        sum += i;
    }
    
    return sum;
}

int main(int argc, char** argv) {

    cout << "the adding result from user's input is: " << addFuncition() << endl;
    return 0;
}

