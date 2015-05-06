//
//  main.c
//  Fibonacci
//
//  Created by Alain  on 2015-05-06.
//  Copyright (c) 2015 Alain . All rights reserved.
//

#include <stdio.h>

//other functions always outside the main function
// use main function to call other function

int Fibonacci(int nthFibanacciNumber){
    
    int previousPreviousVariable = 0; // must be outside for loop, or else thrown out every time within loop
    int previousVariable = 1;
    int current = 0;
    
    
    for (int i=1; i<nthFibanacciNumber; i++){
        
        current = previousVariable + previousPreviousVariable;
        
        previousPreviousVariable = previousVariable;
        previousVariable = current;
        
    }
    return current;
}


int main()
{
    
    int nth = Fibonacci(10);
    printf("%d\n", nth);
    

    return 0;
}
