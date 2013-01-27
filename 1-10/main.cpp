/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on January 27, 2013, 1:44 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

/* adding from 50 to 100 */
int add()
{
    int impleChoice;
    int conditionChoice;
    
    cout << "let user firstly choose the condition choice,1 for switch-case, and 2 if-else" << endl;
    cin >> impleChoice;
    cout << "let user addtionally choose the loop choice,the 1st one is for, the 2nd is while" << endl;
    cin >> conditionChoice;
    cout << "the user's implementation choice is: " << impleChoice << endl;
    cout << "the user's prefer condition choice is: " << conditionChoice << endl;
    
    int sumCase1 = 0;
    int sumCase2 = 0;
    int valForWhile = 0;
    switch(conditionChoice)
    {
        case 1:
            switch(impleChoice)
            {
                case 1:
                    for(int val = 50; val < 100; ++val)
                    {
                        sumCase1 += val;
                    }
                    return sumCase1;
                    break;
         
                case 2:
                    valForWhile = 50;
                    while(valForWhile < 100)
                    {
                        sumCase2 += valForWhile;
                        ++valForWhile;
                    }
                    return sumCase2;
                default:
                    cout <<  "invalid inputing from end user!" << endl;
                    break;
            }
        case 2:
            if(impleChoice == 1)
            {
                for(int val = 50; val < 100; ++val)
                {
                        sumCase1 += val;
                }
                return sumCase1;
            }    
            else if(impleChoice == 2)
            {
               valForWhile = 50;
               while(valForWhile < 100)
               {
                        sumCase2 += valForWhile;
                        ++valForWhile;
               }
               return sumCase2; 
            }
            break;
        default:
        cout <<  "invalid inputing from end user regarding loop way!" << endl;    
    } 

}
int main(int argc, char** argv) {

    cout << "starting the this calculation from 50 to 100" << endl;
    cout << "the add result is:" << add() << endl;
    return 0;
}

