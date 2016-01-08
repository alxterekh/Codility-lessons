//
//  main.c
//  TapeEquilibrium
//
//  Created by Alexander on 08/01/16.
//  Copyright © 2016 Alexander. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <limits.h>

int solution(int A[], int N);

int main(int argc, const char * argv[])
{
    int A[] = {3,1,2,4,3};
    int N = 5;
    printf("%d\n", solution(A, N));
    
    return 0;
}

int solution(int A[], int N)
{
    int minDifference = INT_MAX;
    int currentDifference;
    int leftSum = A[0];
    int sum = 0;
    
    for (int state =  0; state < 2; state++)
    {
        for (int index = 0; index < N; index++)
        {
            switch (state)
            {
                case 0:
                    sum += A[index];
                    break;
                    
                case 1:
                {
                    currentDifference = abs((leftSum << 1) - sum);
                    if (currentDifference < minDifference) minDifference = currentDifference;
                    if(index < N && index)leftSum += A[index];
                }
                break;
                    
                default: break;
            }
        }
    }
    
    return minDifference;
}