/* 
 * File:   main.cpp
 * Author: libin
 *
 * Created on February 27, 2013, 8:35 PM
 */

#include <cstdlib>
#include <iostream>
#include <bitset>

using namespace std;

/*
 * Exercise 3-24: 考虑这样的序列 1,2,3,5,8,13,21,并初始化一个将该序列数字所对应的位置置为 
 * 1 的 bitset<32>对象。然后换个方法,给定一个空的bitset,编写一小段程序把相应的数位设置为1。
 */

void bitSetValue()
{
    bitset<32> bitSetVal;
    
    //pay attention to the use of set.
    
    bitSetVal.set(0);
    bitSetVal.set(1);
    bitSetVal.set(2);
    bitSetVal.set(4);
    bitSetVal.set(7);
    bitSetVal.set(12);
    bitSetVal.set(20);
    
    bool anyOne = bitSetVal.any();
    bool allZero = bitSetVal.none();
    int count = bitSetVal.count();
    int size = bitSetVal.size();
    bool isOne = bitSetVal.test(1);
    
    

    cout << "are there any 1 ? " << anyOne << endl;
    cout << "are all stored bit value is 0? " << allZero << endl;
    cout << "the count of bit value is 1 is:" << count << endl;
    cout << "the size of this bitSet is: " << size << endl;
    cout << "if the required bit2 is 1 ?" << isOne << endl;
    
    
    for(int index = 0; index != bitSetVal.size(); ++index)
    {
        if(index % 8 == 0)
        {
            cout << endl;
        }
        cout << bitSetVal[index] << " ";
    }
    
    bitSetVal.reset();
    
    cout << "after reset the bitset, the bitset is:" << endl;
    for(int index = 0; index != bitSetVal.size(); ++index)
    {
        if(index % 8 == 0)
        {
            cout << endl;
        }
        cout << bitSetVal[index] << " ";
    }
    
    cout << "after flip the bitset, the bitset is:" << endl;
    bitSetVal.flip();
    for(int index = 0; index != bitSetVal.size(); ++index)
    {  
        if(index % 8 == 0)
        {
            cout << endl;
        }
        cout << bitSetVal[index] << " ";
    }  
    
    cout << endl;
    cout << endl;
    cout << endl;
}

void fobonacciBitSet()
{
    bitset<32> bitSetVal;
    int x = 0, y = 1, z;
    /* here, x == 0, y == 1*/
    z = x + y;
      
    while(z <= 21)
    {
        bitSetVal.set(z);
        
        /* here, always make z change the value of all the related variables, including
         y, then y will change the value of x, so that the final z will be modified 
         accordingly */
        x = y;
        y = z;
        z = x + y;
    }
    
    cout << "the required bitSet is" << endl;
    for(int i = 0; i < 32; ++i)
    {
        
        if(i % 8 == 0)
        {
            cout << endl;
        }
        
        cout << bitSetVal[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    
}
int main(int argc, char** argv) {
    cout << "starting Exercise 3-24" << endl;
    bitSetValue();
    fobonacciBitSet();
    return 0;
}

