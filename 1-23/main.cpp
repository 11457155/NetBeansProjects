/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 30, 2013, 10:00 PM
 */

#include <cstdlib>
#include <iostream>
#include "/Users/libin/NetBeansProjects/C++PrimerSourceCode/1/Sales_item.h"

using namespace std;

/*
 * Exercise1.23: Write a program that reads several transactions for the same ISBN.
 * Write the sum of all the transactions that were read.
 */
void addFromInput()
{
    Sales_item salesInput, salesSum;
    
    cout << "starting sales input with the same ISBN" << endl;
    
    while(cin >> salesSum)
    {
        while(cin >> salesInput)
        {
            if(salesSum.same_isbn(salesInput))
            {
                    salesSum += salesInput;
            }
            else
            {
                cout << "The input ISBN is not correct, please right it" << endl;
            }
        }
        
        cout << "the final added value is: " << salesSum << endl;
        cout << "the avg price is: "<< salesSum.avg_price() << endl;
    }
    
   
}
int main(int argc, char** argv) {

    cout << "starting Exercise 1-23" << endl;
    addFromInput();        
    return 0;
}

