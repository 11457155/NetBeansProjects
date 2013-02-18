/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 18, 2013, 9:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * Exercise 3.16: List three ways to define a vector and give it 10 elements, each 
 * with the value 42. Indicate whether there is a preferred way to do so and why. 
 */

void vectorInitialization()
{
    vector<int>vecTest1(10,42);
    vector<int>vecTest2;
    vector<int>vecTest3(10);
    vector<int>vecTest4(10);
    
    for(int i = 0; i != 10; ++i)
    {
        vecTest2.push_back(42);
    }

    /* vecTest3 should be declared to containing 10 int elements*/
    for(int i = 0; i < 10; ++i)
    {
        vecTest3[i] = 42;
    }

    for(vector<int>::iterator index = vecTest4.begin(); index != vecTest4.end(); ++index)
    {
        *index = 42;
    }
    
    cout << "the desired initialized vecTest1 is like:" << endl;
    for(vector<int>::size_type index = 0; index != vecTest1.size(); ++index)
    {
        cout << vecTest1[index] << " ";
    }
    
    cout << endl;
    cout << "the desired initialized vecTest2 is like:" << endl;
    for(vector<int>::size_type index = 0; index != vecTest2.size(); ++index)
    {
        cout << vecTest2[index] << " ";
    }
   
    cout << endl;
    cout << "the desired initialized vecTest3 is like:" << endl;
    for(vector<int>::size_type index = 0; index != vecTest3.size(); ++index)
    {
        cout << vecTest3[index] << " ";
    }
    
    cout << endl;
    cout << "the desired initialized vecTest4 is like:" << endl;
    for(vector<int>::size_type index = 0; index != vecTest4.size(); ++index)
    {
        cout << vecTest4[index] << " ";
    }

}
int main(int argc, char** argv) {
    cout << "starting Exercise 1-16" << endl;
    vectorInitialization();
    cout << endl;
    return 0;
}

