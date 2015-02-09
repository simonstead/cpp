//
//  question3.cpp
//  cppexam14
//
//  Created by Simon Stead on 15/01/2014.
//  Copyright (c) 2014 Simon Stead. All rights reserved.
//

#include "question3.h"



//digits in order (creates vector)
vector<int> digitsinorder(long n)
{
    vector<int> digits;
    
    long temp=n;
    while (temp != 0) {
        
        digits.push_back(int(temp%10));
        temp = (temp-(temp%10))/10;
        
    }
    
    reverse(digits.begin(), digits.end());
    
    return digits;
}


//sum the squares of the digits
int squaresum(const vector<int>& v)
{
    int sum=0;
    for (int i=0; i<v.size(); i++) {
        sum += v[i]*v[i];
    }
    
    return sum;
}




//returns true if n is happy
bool is_happy(const int& n)
{
    vector<int> vectorn = digitsinorder(n);
    bool flag=true;
 
    
    while (flag) {
       
    
        if (squaresum(vectorn)==1) {
            return true;
        }
        
        if (squaresum(vectorn)==4) {
            return false;
        }
        
        vectorn = digitsinorder(squaresum(vectorn));
        
    }
    

    cerr << "You shouldn't see this";
    return false;
    
}











//overloading  << for vectors
/*
 ostream& operator <<(ostream& os, vector<int>& v)
{
    long n=v.size();
    os << "[";
    for (int i=0; i<(n-1); i++) {
        os << v[i] << ",";
    }
    os << v[n] << "]";
    
    
    return os;
    
}*/
