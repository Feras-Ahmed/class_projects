//
//  main.cpp
//  ch 5 8
//
//  Created by Feras Ahmed on 10/7/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
    
    int firstNum, secondNum;
    
    cout << "Please enter two integers, the first must be less than the second : " << endl;
    cin >> firstNum >> secondNum;
    
    cout << "The odd numbers between " << firstNum <<" and " << secondNum <<" are: " << endl;
    int sum=0;
    while (firstNum <= secondNum){
        if(firstNum%2 != 0){
            cout << firstNum << ",";
            cout << endl;
            }
        if (firstNum%2 == 0){
            sum = sum + firstNum;
            cout << "Even numbers";
            cout << firstNum << endl;
            cout << "Squares of even numbers" << pow(firstNum,2);
            }
        
        firstNum++;
        
    }
    
    cout << "the value of num1 is : " << firstNum << endl;
    cout << "The sum of the even numbers is: " << sum << endl;

    
    return 0;
}
