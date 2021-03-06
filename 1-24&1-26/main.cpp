/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 31, 2013, 10:16 PM
 */

#include <cstdlib>
#include <iostream>
#include "/Users/libin/NetBeansProjects/C++PrimerSourceCode/1/Sales_item.h"

using namespace std;

/*
 * Exercise1.24: Write a program that reads several transactions.For each new transaction
 * that you read, determine if it is the same ISBN as the previous transaction, 
 * keeping a count of how many transactions there are for each ISBN. Test the program 
 * by giving multiple transactions. These transactions should represent multiple 
 * ISBNs but the records for each ISBN should be grouped together.
 */

void tractionStatistic()
{
    Sales_item firstItem;
    Sales_item newItem;
    int amount = 1;
    
    if(cin >> firstItem)
    {
        while(cin >> newItem)
        {  
            if (newItem.same_isbn(firstItem))
            {
                /* The original expression is like this: */
                firstItem = firstItem + newItem;
                
                /* rather than this one*/
                //firstItem += newItem;
                
                ++amount;
            }
            else
            {
                cout << "the transaction for the previous one is: "<< firstItem << endl; 
                cout << "the previous transaction count is: "<< amount << endl; 
                /* used for next comparison */
                firstItem = newItem;
                amount = 1;
            }
        }
        
        cout << "the last time transaction is: " << firstItem << endl;
        cout << "the last transaction count is: " << amount << endl;
    }
    else
    {
        cout << "there is no transaction input. " << endl;
    }   
}

int main(int argc, char** argv) {

    cout << "starting Exercise 1-24" << endl;
    tractionStatistic();
    return 0;
}

