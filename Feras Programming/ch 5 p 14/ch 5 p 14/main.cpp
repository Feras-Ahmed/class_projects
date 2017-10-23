//  main.cpp
//  ch 5 p 14
//  Created by Feras Ahmed on 10/11/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.

#include <iostream>
using namespace std;

void initialize (int&, int&, char&);
void getHoursRate (double& h, double& r);
double payCheck (double h, double r);
void printCheck (double& hrsWrkd, double& ratePerHr, double amt);
void funcOne (int& xx, int yy);
void nextChar (char& a);


int main() {
    
    int x, y;
    char z;
    double rate, hours;
    double amount;
    
    
    initialize(x, y, z);
    cout<<"Calling initialize function—\n";
    cout<<"x= "<<x<<"\t"<<"y= "<<y<<"\t"<<"z= "<<z<<endl;
    
    cout<<"\nCalling getHoursRate function—\n";
    getHoursRate(hours,rate);
    cout<<"Hours= "<<hours<<"\t"<<"Rate= "<<rate<<endl;
    
    cout<<"\nCalling payCheck function—\n";
    amount=payCheck(hours, rate);
    cout<<"Amount= "<<amount<<endl;
    
    cout<<"\nCalling printCheck function—\n";
    printCheck(hours, rate, amount);
    
    cout<<"\nCalling funcOne function—\n";
    x= 15;
    y= 10;
    funcOne(x, y);
    cout<<"x= "<<x<<endl;
    
    cout<<"\nCalling nextChar function—\n";
    z= 'z'; 
    nextChar(z); 
    cout<<"z= "<<z<<endl;
    
    return 0;
}

// Part a
void initialize (int& a, int& b, char& c){

    a = 0;
    b = 0;
    c = ' ';
}

// Part b
void getHoursRate (double& h, double& r){
    
    cout << "Enter the hours worked: " << endl;
    cin >> h;
    
    cout << "Enter the rate per hour: " << endl;
    cin >> r;

}

// Part c
double payCheck (double h, double r){
    
    if (h<40)
        return h*r;
    else
        return h*(r*1.5);
    
    
}

// Part d
void printCheck (double& hrsWrkd, double& ratePerHr, double amount){
    cout << "\nThis is your check" << endl;
    cout << "Hours worked: " << hrsWrkd << endl;
    cout << "Rate per hour: " << ratePerHr << endl;
    cout << "Salary: " << amount << endl;
}

// Part e
void funcOne (int& xx, int yy){
    int a= 0;
    
    cout << "\nEnter a number: " << endl;
    cin >> a;
    xx = a+2*(xx)+(yy-a);
}

// Part f
void nextChar (char& a){
    a = 'z';
}