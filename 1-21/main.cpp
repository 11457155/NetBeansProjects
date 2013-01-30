/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 30, 2013, 8:57 PM
 */

#include <cstdlib>
#include <iostream>
#include "/Users/libin/NetBeansProjects/C++PrimerSourceCode/1/Sales_item.h"

using namespace std;

/*
 * Exercise 1.21: Write a program that loops through a set of book sales transactions, 
 * reading each transaction and writing that transaction to the standard output.
 */

void salesInfoPrint()
{
    Sales_item saleInfo;
    cout << "please input the sales info" << endl;
    while(cin>>saleInfo)
    {
        cout << "the sales info can be listed as below:" << saleInfo << endl;
    }   
}
int main(int argc, char** argv) {

    cout << "starting Exercise-21" << endl;
    salesInfoPrint();
    return 0;
}

