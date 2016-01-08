//
//  main.c
//  PermMissingElem
//
//  Created by Alexander on 08/01/16.
//  Copyright © 2016 Alexander. All rights reserved.
//

#include <stdio.h>

int solution(int A[], int N);

int main(int argc, const char * argv[])
{
    int A[] = {2,3,1,5};
    int N = 4;
    printf("%d\n", solution(A, N));
    
    return 0;
}

int solution(int A[], int N)
{
    long sum = (long)(N+1)*(N+2)/2;
    int currentSum = 0;
    for(int index = 0; index < N; index++)
    {
        currentSum +=A[index];
    }
    
    return (int)sum - currentSum;
}
