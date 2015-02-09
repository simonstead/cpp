//
//  question1.cpp
//  cppexam14
//
//  Created by Simon Stead on 15/01/2014.
//  Copyright (c) 2014 Simon Stead. All rights reserved.
//

#include "question1.h"

//defining pi and limit of sequence
long double pi= (4*atan(1.));
long double limit= (pi*pi*0.125);




//sum function
double sum(int n){
    
    double sum=1;

    for (int k=1; k<=n; k++) {
        //sum += (1/((2*k-1)*(2*k-1)*(2*k+1)*(2*k+1)));
        //sum += 1/(pow((2.*k-1)*(2.*k+1), 2));
        sum += f(k);
    }
    
    return sum;
}



//error function
double error(int n)
{
    
    double error = limit - sum(n);
    
    
    //abs value
    if (error < 0) {
        error*=(-1);
    }
    
    return error;
    
    
}


//function to evaluate each term in the sequence
double f(int k)
{
    double n=(2*k-1)*(2*k-1)*(2*k+1)*(2*k+1);
    return (1./n);

    
}