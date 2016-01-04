//
//  main.c
//  BinaryGap
//
//  Created by Alexander on 04/01/16.
//  Copyright © 2016 Alexander. All rights reserved.
//

#include <stdio.h>

typedef enum {
    undefined,
    insideGap,
    endGap
} State;

int solution(int N);

int main(int argc, const char * argv[])
{
    printf("%d\n", solution(9));
    return 0;
}

int solution(int N)
{
    int maxBinaryGap = 0;
    int currentBinaryGap = 0;
    State state = undefined;
    int residue = N;
    
    while (residue>0)
    {
        switch (state)
        {
            case insideGap:
            {
                currentBinaryGap++;
                residue = residue/2;
                if (residue%2 == 1) state = endGap;
            }
            break;
            case endGap:
            {
                if (currentBinaryGap > maxBinaryGap) maxBinaryGap = currentBinaryGap;
                state = undefined;
                currentBinaryGap = 0;
            }
            break;
           
            default:
            {
                if(residue%2 == 1 && (residue/2)%2 == 0) state = insideGap;
                residue = residue/2;
            }
            break;
        }
    }
    return maxBinaryGap;
}
