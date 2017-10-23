//
//  main.cpp
//  ch 5 p 20
//
//  Created by Feras Ahmed on 10/8/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double loanAmount;
    double interestRatePerYear;
    double interestRatePerMonth;
    double monthlyPayment;
    
    cout << "Enter the loan amount : $" << endl;
    cin >> loanAmount;
    
    cout << "Enter the interest rate per year as percentage: " << endl;
    cin >> interestRatePerYear;
    interestRatePerMonth = interestRatePerYear/12;
    
    cout << "Enter the monthly payment: $" << endl;
    cin >> monthlyPayment;
    
    int numOfYears = 0;
    int monthlyInterestPmt;
    
    if ((monthlyInterestPmt = loanAmount*(interestRatePerMonth/100))>monthlyPayment)
        cout << "The monthly payment is less than the first month's interest, the monthly payment is too low, with this payment the loan amount cannot be repaid." << endl;
    
    while (loanAmount >= 0){
        
        monthlyInterestPmt = loanAmount*(interestRatePerMonth/100);
        loanAmount = loanAmount - (monthlyPayment-monthlyInterestPmt);
        
        numOfYears++;
    }
    
    cout << "The number of years it would take to repay the loan: " << numOfYears << endl;
    
    return 0;
}
