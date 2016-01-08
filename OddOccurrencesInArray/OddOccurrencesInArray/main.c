//
//  main.c
//  OddOccurrencesInArray
//
//  Created by Alexander on 07/01/16.
//  Copyright © 2016 Alexander. All rights reserved.
//

#include <stdio.h>

int solution(int A[], int N);

int main(int argc, const char * argv[])
{
    int A[] = {9,3,9,3,9,7,9};
    int N = 7;
    
    printf("%d\n", solution(A,N));
    
    return 0;
}

int solution(int A[], int N)
{
    int sum = 0;
    for (int index = 0; index < N; index++)
    {
        sum ^=A[index];
    }
    
    return sum;
}
