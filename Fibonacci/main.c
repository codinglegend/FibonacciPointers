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


// part 1: iteration

int Fibonacci(int nthFibonacciNumber){ //nthFibonacciNumber is what we input in main function
    
    int previousPreviousVariable = 0; // must be outside for loop, or else thrown out every time within loop
    int previousVariable = 1;
    int current = 0;
    
    
    for (int i=2; i<nthFibonacciNumber; i++){
        
        current = previousVariable + previousPreviousVariable;
        
        previousPreviousVariable = previousVariable;
        previousVariable = current;
        
    }
    return current;
}

// part 2: recursion via pass by --> build returned value 144 instead of 55

     int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber) {
     if (remainingSteps == 0) {
         return previousPreviousNumber + previousNumber;
     }
     return recursiveValueFibonacci(remainingSteps - 1, previousPreviousNumber + previousNumber, previousNumber);
 }



int main()
    {
    int nth = Fibonacci(10);
    printf("%d\n", nth);
        
    int result = recursiveValueFibonacci(10, 1, 0);
    printf("%d\n", result);
    

    return 0;
}
