﻿
#include <iostream>
using namespace std;


int main()
{
    int i, j, min, index, temp;
    int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
    for (i = 0; i < 10; i++)
    {
        cout << "before array[" << i << "]  =  " << array[i] << endl;

    }
    for (i = 0; i < 10; i++)
    {
        min = 1000;
        for (j = i; j < 10; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
           // cout << " i  =  "<<i<<" j = " <<j<<"  min = " << min << "  index = " << index << endl;
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
        cout << "after array["<<i<<"]  =  " << array[i] << endl;
    }




    return 0;
}


