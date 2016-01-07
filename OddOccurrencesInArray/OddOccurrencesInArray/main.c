//
//  main.c
//  OddOccurrencesInArray
//
//  Created by Alexander on 07/01/16.
//  Copyright © 2016 Alexander. All rights reserved.
//

#include <stdio.h>

int solution(int A[], int N);
void deleteElementByIndex(int array[], int *elmentsCount, int number);

int main(int argc, const char * argv[])
{
    int A[] = {9,3,9,3,9,7,9};
    int N = 7;
    
    printf("%d\n", solution(A,N));
    
    return 0;
}

int solution(int A[], int N)
{
    int index = 0;
    while (N>1)
    {
        if (A[0] == A[index] && index != 0)
        {
            deleteElementByIndex(A, &N, 0);
            deleteElementByIndex(A, &N, index-1);
            index = 0;
        }
        else if(index == N-1 && A[0] != A[index])
        {
            break;
        }
        else
        {
            index++;
        }
    }
    
    return A[0];
}

void deleteElementByIndex(int array[], int *elmentsCount, int number)
{
    *elmentsCount = *elmentsCount-1;
    for (int index = number; index < *elmentsCount; index++)
    {
        array[index] = array[index+1];
    }
}
