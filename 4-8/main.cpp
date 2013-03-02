/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on March 2, 2013, 2:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * Exercise 4.8: 编写程序判断两个数组是否相等,然后编写一段类似的程序比较两个 vector。 
 */

int comparisonArrAndVec()
{
    const int arr_size = 5;
    
    int arr1[arr_size];
    int arr2[arr_size];
    
    //int vecInput1;
    //int vecInput2;
    vector<int> vec1(5,1);
    vector<int> vec2(5,2);
    
    cout << "please input " << arr_size << "  numbers for array1:" << endl;
    for(size_t index = 0; index != arr_size; ++index)
    {
        cin >> arr1[index];
    }
    
    cout << "please input " << arr_size << "  numbers for array2:" << endl;
    for(size_t index = 0; index != arr_size; ++index)
    {
        cin >> arr2[index];
    }
    
    for(size_t index = 0; index != arr_size; ++index)
    {
        if(arr1[index] == arr2[index])
        {
            cout << "array1 and array2 are equal" << endl;
        }
        else
        {
            cout << "array1 and array2 are unequal" << endl;
        }
    }
#if 0   
    cout << "please input  numbers for vector1(-1 to end):" << endl;
    cin >> vecInput1;
    
    while(vecInput1 != -1)
    {
        vec1.push_back(vecInput1);
    }
    
    cout << "please input  numbers for vector2(-1 to end):" << endl;
    cin >> vecInput2;
    
    while(vecInput2 != -1)
    {
        vec2.push_back(vecInput2);
    }
#endif   
    if(vec1.size() != vec2.size())
    {
        cout << "vector1 and vector2 are unequal" << endl;
    }

    else if(vec1.size() == 0)
    {
        cout << "vector1 and vector2 are equal" << endl;
    }
    else
    {
        vector<int>::iterator iter1 = vec1.begin();
        vector<int>::iterator iter2 = vec2.begin();
        
        while((*iter1 == *iter2) && (iter1 != vec1.end()) && (iter2 != vec2.end()))
        {
            ++iter1;
            ++iter2;
        }
        
        /* here, either vector1 or vector2 could be used here to identify the end 
         * of this comparison
         */
        if(iter1 == vec1.end() || iter2 == vec2.end())
        {
            cout << "vector1 and vector2 are equal";
        }
        else
        {
            cout << "vector1 and vector2 are not equal";
        }
    }

    
    cout << endl;
}

int main(int argc, char** argv) {

    cout << "start exercise 4-8" << endl;
    comparisonArrAndVec();
    return 0;
}

