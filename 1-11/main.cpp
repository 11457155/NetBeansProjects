/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 2:36 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

/* function for printing the number from 10 to 1 */
void printNumber()
{
    int loopWay;
    int whileLoopCntr = 0;
    cout << "input the loop way" << endl;
    cin >> loopWay;
    
    switch(loopWay)
    {
         case 1:
            for (int i = 10; i >= 0; --i)
            {
                cout << "for function, this numbers are: " << i << endl;
            }
            break;
        case 2:
            whileLoopCntr = 10;
            while (whileLoopCntr >= 0)
            {
                cout << "while function, this numbers are: " << whileLoopCntr << endl;
                --whileLoopCntr;     
            }
            break;     
        default:
            cout << "error input" << endl;
    }
    
}
int main(int argc, char** argv) {
    printNumber();
    return 0;
}

