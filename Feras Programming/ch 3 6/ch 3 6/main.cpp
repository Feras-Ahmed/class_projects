//  main.cpp
//  ch 3 6
//
//  Created by Feras Ahmed on 9/13/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main (){

    ifstream inFile;
    ofstream outFile;
    
    string firstName;
    string lastName;
    double currentSalary;
    double payincreasevalue;
    double payincreasepercent;
    
    inFile.open ("/Users/ferasahmed/Desktop/programming/ch 3 6/ch 3 6/Ch3_Ex6Data.txt");
    outFile.open ("/Users/ferasahmed/Desktop/programming/ch 3 6/ch 3 6/Ch3_Ex6Output.dat");
    
    outFile << fixed << showpoint << setprecision(2);
    
    //Person 1
        inFile >> firstName >> lastName;
        outFile << "First Name: " << firstName << " " << "Last Name: " << lastName << endl;
    
        inFile >> currentSalary >> payincreasevalue;
        outFile << "Current Salary: $" << currentSalary << " " << "Pay Increase Rate: " << payincreasevalue << endl;
    
        payincreasepercent = payincreasevalue/100;
        double updatedSalary =(currentSalary*payincreasepercent)+currentSalary;
    
        outFile << "Updated Salary: $" << updatedSalary << endl;
    
    //Person 2
        inFile >> firstName >> lastName;
        outFile << "First Name: " << firstName << " " << "Last Name: " << lastName << endl;
    
        inFile >> currentSalary >> payincreasevalue;
        outFile << "Current Salary: $" << currentSalary << " " << "Pay Increase Rate: " << payincreasevalue << endl;
    
        payincreasepercent = payincreasevalue/100;
        updatedSalary =(currentSalary*payincreasepercent)+currentSalary;
    
        outFile << "Updated Salary: $" << updatedSalary << endl;;
    
    //Person 3    
        inFile >> firstName >> lastName;
        outFile << "First Name: " << firstName << " " << "Last Name: " << lastName << endl;
    
        inFile >> currentSalary >> payincreasevalue;
        outFile << "Current Salary: $" << currentSalary << " " << "Pay Increase Rate: " << payincreasevalue << endl;
    
        payincreasepercent = payincreasevalue/100;
        updatedSalary =(currentSalary*payincreasepercent)+currentSalary;
    
        outFile << "Updated Salary: $" << updatedSalary << endl;;
    
    
    inFile.close();
    outFile.close(); 
    
    return 0;
}