//
//  main.cpp
//  ch 5 p 28
//
//  Created by Feras Ahmed on 10/8/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int totalNumOfUnits;
    double rentToOccupyAllUnits;
    double increaseRent;
    double maintenance;
    
    cout << "Enter the total number of units: " << endl;
    cin >> totalNumOfUnits;
    
    cout << "Enter the rent to occupy all units: " << endl;
    cin >> rentToOccupyAllUnits;
    
    cout << "Enter the increase in rent that results in a vacant unit." << endl;
    cin >> increaseRent;
    
    cout << "Enter the amount needed to maintain a rented unit." << endl;
    cin >> maintenance;
    
    double maxProfit =0;
    double n;
    double profit =0;
    double income =0;
    double maintenanceCosts= 0;
    
    for (totalNumOfUnits; totalNumOfUnits > 0; totalNumOfUnits--, rentToOccupyAllUnits+=increaseRent){
        income = totalNumOfUnits*rentToOccupyAllUnits;
        maintenanceCosts = maintenanceCosts*totalNumOfUnits;
        profit = income-maintenanceCosts;
        
        if (profit > maxProfit)
            n = totalNumOfUnits;
        
        
    }
    
    cout << "Number of units to be rented to maximize the profit: " << n << endl;
    return 0;
}
