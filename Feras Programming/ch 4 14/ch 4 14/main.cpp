//  main.cpp
//  ch 4 14
//  Created by Feras Ahmed on 10/4/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.

#include <iostream>
#include <iomanip> 


using namespace std;

int main(){
    
    int accountNum;
    char serviceCode;
    double numMinsUsed;
    double daytimeMins;
    double nighttimeMins;
    double daytimeDue;
    double nighttimeDue;
    double amountDue;
    
    cout << fixed << setprecision(2);
    
    cout << "Enter your account number: " << endl;
    cin >> accountNum;
    
    cout << "Enter your service code: " << endl;
    cin >>(serviceCode);
    
    switch (serviceCode){
            case 'r':
                cout << "Enter the number of minutes the service was used: " << endl;
                    cin >> numMinsUsed;
                    if (numMinsUsed <= 50)
                    
                        amountDue = 10.00;
            
                    else
                        amountDue = (numMinsUsed*(.20))+(10);
            

                cout << "Your Monthly Service Bill" << endl;
                cout << "Type of Service: Regular" << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Number of minutes service was used: " << numMinsUsed << endl;
                cout << "Amount due is: $" << amountDue << endl;
            
                break;
            
            
            case 'R':
                cout << "Enter the number of minutes the service was used: " << endl;
                    cin >> numMinsUsed;
                    if (numMinsUsed <= 50)
                
                        amountDue = 10.00;
            
                    else
                        amountDue = (numMinsUsed*(.20))+(10);
            
            
                cout << "Your Monthly Service Bill" << endl;
                cout << "Type of Service: Regular" << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Number of minutes service was used: " << numMinsUsed << endl;
                cout << "Amount due is: $" << amountDue << endl;
            
                break;
            
            case 'p':
                cout << "Enter the number of minutes used during the day: " << endl;
                    cin >> daytimeMins;
                cout << "Enter the number of minutes used during the night: " << endl;
                    cin >> nighttimeMins;
            
                if (daytimeMins <= 75)
                    daytimeDue = 25.00;
                    else
                        daytimeDue = (daytimeMins*(.10)+25.00);
            
                if (nighttimeMins <= 100)
                    
                    nighttimeDue = 25.00;
                    else
                        nighttimeDue = (nighttimeMins*.05)+25.00;
            
                cout << "Your Monthly Service Bill" << endl;
                cout << "Type of Service: Premium" << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Number of minutes service was used: " << daytimeMins+nighttimeMins << endl;
                cout << "Amount due is: $" << daytimeDue+nighttimeDue << endl;
            
                break;
            
            case 'P':
            
                cout << "Enter the number of minutes used during the day: " << endl;
                    cin >> daytimeMins;
                cout << "Enter the number of minutes used during the night: " << endl;
                    cin >> nighttimeMins;
            
                if (daytimeMins <= 75)
                    daytimeDue = 25.00;
                else
                    daytimeDue = (daytimeMins*(.10)+25.00);
            
                if (nighttimeMins <= 100)
                    nighttimeDue = 25.00;
                else
                    nighttimeDue = (nighttimeMins*.05)+25.00;
            
                cout << "Your Monthly Service Bill" << endl;
                cout << "Type of Service: Premium" << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Number of minutes service was used: " << daytimeMins+nighttimeMins << endl;
                cout << "Amount due is: $" << daytimeDue+nighttimeDue << endl;
            
                break;
            
            
            default:
                cout << "Error. Please try again with a valid service code." << endl;
        }
        
    
    return 0;
}