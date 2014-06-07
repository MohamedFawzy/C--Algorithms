//
//  main.cpp
//  sequential_search
//
//  Created by Mohamed Fawzy on 6/3/14.
//  Copyright (c) 2014 Mohamed fawzy. All rights reserved.
//

/*
 sequential search
 analysis : problem with it the length of array this could increase runtime according it's will compare every new value with setted value in [currentlarge] which takes more time for calls between processor then ram and set new large value at our variable which will call processor and processor will call ram for set it in variable address at memory for e.g if Memory address 1x000011 it's will call it 1000 time if variable length 1000
 */

#include <iostream>
using namespace std;
int largest(int array[], int n);
int main(int argc, const char * argv[])
{

    int array[] = {1,2,4,5,67,878,43,2,4,5};
    int sizeofArray = 10;
    int result=0;
    result = largest(array, sizeofArray);
    cout << "Largest value is " << array[result] << "\n";
    
}


// return the largest value in array [Array] of size [n]
int largest(int array[], int n)
{
    int currentLarge =0; // placeholder for largest value index
    for(int i=1; i<n; i++)
    {
        if(array[currentLarge] < array[i])
        {
            currentLarge=i;
        }
    }
    
    return currentLarge;
}
