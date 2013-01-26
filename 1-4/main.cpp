/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 26, 2013, 9:22 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

/* function for getting the inputs for multiply operation*/
int* numberForMultiply()
{
    int input[2]={0,0};
    cout << "now, the input two data for calculation are: " << endl;
    cin >> input[0] >> input[1];
    cout << "the input value is:" << input[0] << " and "<< input[1]<< endl;
    return input;
}

/* function for performing the operation */
int mulResult()
{
    int *value;
    cout << "now perform the multiple operation:" << endl;
    value = numberForMultiply();
    int x,y;
    
    x = *value;
    y = *(++value);

    /* especially pay attention to the ++ operator for pointer */
    int mulRlt = x*y;
   
    cout << "the value of these two input are: " << x << " and " << y << endl;
    cout << "the calculated result is:" << mulRlt << endl;
    return mulRlt;
}
int main(int argc, char** argv) {
    cout << "the final multiple result is: " << mulResult() <<endl;
    return 0;
}

