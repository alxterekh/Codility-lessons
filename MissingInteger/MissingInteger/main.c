//
//  main.c
//  MissingInteger
//
//  Created by Alexander on 09/01/16.
//  Copyright © 2016 Alexander. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int solution(int A[], int N);

int main(int argc, const char * argv[])
{
    int A[] = {2,3};
    int N = 2;
    printf("%d\n", solution(A, N));
    return 0;
}

int solution(int A[], int N)
{
    int element = 0;
    int count[N+1];
    memset(count, 0, (N+1)*sizeof(int));
    
    for (int index = 0; index < N; index++)
    {
        if (A[index] > 0 && A[index] < N+1) count[A[index]] +=1;
    }
    
    for (int index = 1; index < N+1; index++)
    {
        if (count[index] == 0)
        {
            element = index;
            break;
        }
    }

    return (element == 0) ? N+1 : element;
}