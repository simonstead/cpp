//
//  question4.h
//  cppexam14
//
//  Created by Simon Stead on 15/01/2014.
//  Copyright (c) 2014 Simon Stead. All rights reserved.
//

#ifndef __cppexam14__question4__
#define __cppexam14__question4__

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//class of Eisenstein integers
class E_int
{
private:
    
    int a,b;
    
public:
    
    //constructor prototypes
    E_int();
    E_int(int a, int b);
    
    
    //sets and gets
    void seta(int a);
    void setb(int b);
    int geta();
    int getb();
    
    
    
};



//norm function
int enorm(E_int);

//isprime
bool is_e_prime(E_int);


//overload prototypes
E_int operator + (E_int, E_int);
E_int operator - (E_int, E_int);
E_int operator * (E_int, E_int);



ostream& operator <<(ostream&, E_int&);
istream& operator >>(istream&, E_int&);


//console output
void print(E_int);


//to test for primality
vector<int> divisorsofn(int n);
bool isprime(int n);



#endif /* defined(__cppexam14__question4__) */
