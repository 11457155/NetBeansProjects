/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 18, 2013, 10:26 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
 * Exercise3.17: Re do the exercises from Section3.3.2(p.96),using iterators rather 
 * than subscripts to access the elements in the vector.
 * 1. 读一组整数到 vector 对象,计算并输出每对相邻元素的和。如果读入元素个数为奇数,则提示用户最
 * 后一个元素 没有求和,并输出其值。然后修改程序:头尾元素两两配 对(第一个和最后一个,第二个和倒数第
 * 二个,以此类推), 计算每对元素的和并输出。
 */

void adjecentSumFromInput()
{
    int input;
    vector<int>vecInt;
    
    while(cin >> input)
    {
        vecInt.push_back(input);
    }
    
    if(vecInt.empty())
    {
        cout << "No user input, program ends." << endl;
        return;
    }
    
    cout << "the sum of adjacent elements is: " << endl;
    /*
    for(vector<int>::iterator iter = vecInt.begin(); iter != vecInt.end(); iter = iter + 2)
    {
        if(vecInt.size() % 2 == 0)
        {
            cout << *iter + *(iter + 1) << " ";
        }
        else
        {
            cout << vecInt[vecInt.size() - 1] << endl;
            return;
        }
    }
    */
    for(vector<int>::iterator iter = vecInt.begin(); iter != vecInt.end(); iter = iter + 2)
    {
        cout << *iter + *(iter + 1) << endl;
        
        if(vecInt.size() %2 != 0)
        {
            // pay attention to here, iter could equal  vecInt.end() - 1, so * could
            // be used for this.
            cout << *(vecInt.end()-1) << " ";
            return;
        }
    }
    cout << endl;
}

void reverseSum()
{
    int input;
    vector<int> sumVec;
    
    while(cin>>input)
    {
        sumVec.push_back(input);
    }
    
    if(sumVec.empty())
    {
        cout << "no input from user!" << endl;
        return;
    }
    
    cout << "the required sum of first and the last elements are: " << endl;
    
    // pay attention to the conditional judgement
    for(vector<int>::iterator iter1 = sumVec.begin(), iter2 = sumVec.end() - 1; \
            iter1 < iter2; iter1++, iter2--)
    {
        cout << (*iter1) + (*iter2) << " ";
    }
    cout << endl;
}

/*
 * 读入一段文本到 vector 对象,每个单词存储为 vector 中的一个元素。把 vector 对象中每个单词转
 * 化为大写字母。输出 vector 对象中转化后的元素,每八个单词为一行输出。
 */
void characterToUpperCase()
{
    string strinput;
    vector<string> strVec;
    vector<string>::size_type cnt = 0;
    
    while(cin >> strinput)
    {
        strVec.push_back(strinput);
    }
    
    if(strVec.empty())
    {
        cout << "there is no input from user" << endl;
        return;
    }
    
    for(vector<string>::iterator iter = strVec.begin(); iter != strVec.end(); ++iter)
    {
        for(string::size_type index = 0; index != (*iter).size(); ++index)
        {
            // pay attention to the use of this item here
            if(islower((*iter)[index]))
            {
                (*iter)[index] = toupper((*iter)[index]);
                
                  
            }

        }
        
        cout << *iter << " ";
                ++cnt; 
                
        if(cnt % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
}
int main(int argc, char** argv) {
    cout << "Starting Exercise 3-17" << endl;
    adjecentSumFromInput();
    reverseSum();
    characterToUpperCase();
    return 0;
}

