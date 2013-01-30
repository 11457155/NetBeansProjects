/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 30, 2013, 9:39 PM
 */

#include <cstdlib>
#include <iostream>
#include "/Users/libin/NetBeansProjects/C++PrimerSourceCode/1/Sales_item.h"

using namespace std;

/*
 * Exercise 1.22: Write a program that reads two Sales_item objects that have 
 * the same ISBN and produces their sum.
 */

void addSalesInfo() 
{
    Sales_item salesItem1, salesItem2;
    cout <<"starting input the ISBN, sales price and the average price." << endl;
    cin >> salesItem1 >> salesItem2;
    
    cout << "the added result are:" << salesItem1 + salesItem2 << endl;
}
int main(int argc, char** argv) {

    cout << "Starting Exercise 1-22" << endl;
    addSalesInfo(); 
    return 0;
}

