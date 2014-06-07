//
//  main.cpp
//  sequential_search
//
//  Created by Mohamed Fawzy on 6/3/14.
//  Copyright (c) 2014 Mohamed fawzy. All rights reserved.
//

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
