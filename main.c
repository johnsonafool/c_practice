//
//  main.c
//  test
//
//  Created by Johnson Johnson on 6/24/22.

//  Bubble sort
#include <stdio.h>

void bubbleSort(int array[], int size);

void printArray(int array[], int size);

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[] = {8, 5, 4, 32, 4, 22, 55, 1, 17, 21};
    int size = sizeof(array)/sizeof(array[0]);
    
    bubbleSort(array, size);
    printArray(array, size);
    
    return 0;
}

void bubbleSort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++){
        for (int j = 0; j< size - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}
