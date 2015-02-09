//
//  question4.cpp
//  cppexam14
//
//  Created by Simon Stead on 15/01/2014.
//  Copyright (c) 2014 Simon Stead. All rights reserved.
//

#include "question4.h"


//constructors
E_int::E_int(){a=b=0;}
E_int::E_int(int aa, int bb){a = aa; b=bb;}


//sets and gets
void E_int::seta(int a1){a=a1;};
void E_int::setb(int b1){b=b1;};
int  E_int::geta(){return a;};
int  E_int::getb(){return b;};



//norm function
//norm calulated by ||a+bw||=|(a+bw)(a+bw*)|=a^2 + b^2 - ab
int enorm(E_int e)
{return e.geta()*e.geta() + e.geta()*e.getb() - e.geta()*e.getb();}





//to test for primality
vector<int> divisorsofn(int n)
{
    vector<int> divisors;
    
    for (int i=1; i<=n; i++) {
        if (n%i == 0)
        {divisors.push_back (i);}
    }
    
    return divisors;
}
;


//testing for primality
bool isprime(int n)
{
    
    if (divisorsofn(n).size() == 2) {
        return 1;
    }
    return 0;
}




//isprime
bool is_e_prime(E_int e)
{
    int n = enorm(e);
    
   //cases w,-w
    if (e.geta()==0) {
       
        int b = abs(e.getb());
        if (isprime(b) && b%3 == 2) {
            return true;
        }
    }
    
    //cases 1, -1
    if (e.getb()==0) {
        
        int a = abs(e.geta());
        if (isprime(a) && a%3 == 2) {
            return true;
        }
    }
    
    
    //cases 1+w, -1 -w
    if (e.geta() == e.getb()) {
        
        int a = abs(e.geta());
        if (isprime(a) && a%3 == 2) {
            return true;
        }
    }
    
    

    
    //case ii
    if (isprime(n) && (n%3 == 0 || n%3 == 1)) {
        return true;
    }
    
    else {    return false;}
    
    
    
}






//operator overloads
E_int operator + (E_int e, E_int f)
{return E_int(e.geta()+f.geta(), e.getb()+f.getb());}


E_int operator - (E_int e, E_int f)
{return E_int(e.geta()-f.geta(), e.getb()-f.getb());}



E_int operator * (E_int e, E_int f)
{return E_int(e.geta()*f.geta() - e.getb()*f.getb() , e.geta()*f.getb() + e.getb()*f.geta() - e.getb()*f.getb());}





//overloading <<
ostream& operator <<(ostream& os, E_int& e)
{
    
    if (e.geta()==0) {
        if (e.getb()==1) {
            os << "w"; return os;
        }
        if (e.getb()==-1) {
            os << "-w"; return os;
        }
        if (e.getb()==0) {
            os << 0; return os;
        }
        else{os << e.getb() << "w"; return os;}
        
    }
    
    
    if (e.getb()==0) {os << e.geta(); return os;}
    if (e.getb()==1) {os << e.geta() << " + w"; return os;}
    if (e.getb()==-1){os << e.geta() << " - w"; return os;}
    

    else {os << e.geta() << " + " << e.getb() << "w"; return os;}
   }


//overloading >>
istream& operator >>(istream& is, E_int& e)
{
    int a,b;
    char ch, ch1;
    
    is >> a >> ch >> b >> ch1;
    
    e.seta(a);
    e.setb(b);
    
    
    return is;
    
}




//output function
void print(E_int z){cout << z << endl;}







