/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 3, 2013, 2:43 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
void loopVariableTest()
{
    int i = 100;
    int sum = 0;
    for(int i = 0; i <= 9; ++i)
        sum += i;
    cout << "the value of i is: " << i << "\t and the value of sum is: " << sum\
            <<endl;
    
    double test = 3.1314;
    const int &ref = test;
    cout << "the original double type value is: " << test << "\t and the reference value is:" \
<< ref << endl;
}

void variableJudgement()
{
    int sum = 0;
    for(int i = 0; i <= 9; ++i)
        sum += i;
    
    /* the below operation of printing i is invalid, coz i is merely valid within
     the loop */
#if 0    
    cout << "the value of i is: " << i << "\t and the value of sum is: " << sum\
            <<endl;
#endif
}
int main(int argc, char** argv) {

    cout << "start Exercide 2-20 and 2-21" << endl;
    loopVariableTest();
    return 0;
}

