//
//  question2.cpp
//  cppexam14
//
//  Created by Simon Stead on 15/01/2014.
//  Copyright (c) 2014 Simon Stead. All rights reserved.
//

#include "question2.h"




int akn(int a, int k, int n){
    
    //error checking
    if (a<0) {
        return -1;
    }
    
    
    int akn=1;
    
    for (int i=1; i<=k; i++) {
        akn=((a*akn)%n);
        
    }


        return akn;}