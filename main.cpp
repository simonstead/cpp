//
//  main.cpp
//  cppexam14
//
//  Created by Simon Stead on 15/01/2014.
//  Copyright (c) 2014 Simon Stead. All rights reserved.
//

#include <iostream>
#include "question1.h"
#include "question2.h"
#include "question3.h"
#include "question4.h"
#include "question5.h"


using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();


int main()
{
    
    int command=9;
    while (command != '0') {
    
        cout << "Question 1,2,3,4,5? 0 quits\n";
        cin >> command;
        
    switch (command) {
            
            
        case 1:
            question1();
            break;
            
        case 2:
            question2();
            break;
            
        case 3:
            question3();
            break;
            
        case 4:
            question4();
            break;
            
        case 5:
            question5();
            break;
        
        case 0:
            return 0;
            
        default: cout << "Please enter 1,2,3,4,5 or 0\n\n";
            break;
    }//endswitch
        
    }//endwhile
    
    
    
    return 0;
}




void question1(){
    int n;
    cout << "enter N: \n";
    cin >> n;
    cout << "Sum to n: \n" << sum(n) << endl;
    
    for (int i=1; i<=20; i++) {
        cout << "E(" << i << "):  " << error(i) << endl;
    }
    
    
};



void question2(){cout << "3^729 mod 7:   " << akn(3, 729, 7) << endl;};



void question3(){
    

    
    long double k=0;
    long n=1000;
    for (int i=1; i<=n; i++) {
        if (is_happy(i)) {
            cout << i << endl;
            k+=1;
        }
    }
    
    
    cout << "Percentage of Happy Numbers: " << 100*k/n << endl;

};




void question4(){
    
    //this is 1+2i*sqrt(3)
    E_int z0(3,4);
    print(z0);
    
    //demonstrating +
    E_int z1(1,1);
    E_int z2(-4,3);
    E_int zsum = z1 + z2;
    cout << "(" << z1 << ") +  (" << z2 << ") = ";
    print(zsum);
    
    //demonstrating *
    E_int z3(0,-1);
    E_int z4(1,1);
    E_int zprod = z3*z4;
    cout << "(" << z3 << ")*(" << z4 << ") = ";
    print(zprod);
    
    
};





void question5(){cout << "question 5\n\n";};
