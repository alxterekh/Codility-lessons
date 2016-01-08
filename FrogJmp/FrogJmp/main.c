//
//  main.c
//  FrogJmp
//
//  Created by Alexander on 08/01/16.
//  Copyright © 2016 Alexander. All rights reserved.
//

#include <stdio.h>

int solution(int X, int Y, int D);

int main(int argc, const char * argv[])
{

    return 0;
}

int solution(int X, int Y, int D)
{
    
    return ((Y-X)%D) ? (Y-X)/D + 1 : (Y-X)/D;
}

