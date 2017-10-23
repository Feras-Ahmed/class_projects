//
//  main.cpp
//  ch 5 12
//
//  Created by Feras Ahmed on 10/7/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    // insert code here...
    
    double townApopulation = 0;
    double townApoprate = 0;
    int townBpopulation = 0;
    double townBpoprate = 0;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Enter the population of town A: " << endl;
    cin >> townApopulation;
    
    cout << "Enther the growth rate of town A: " << endl;
    cin >> townApoprate;
    townApoprate = townApoprate/100;
    
    cout << "Enter the population of town B: " << endl;
    cin >> townBpopulation;
    
    cout << "Enter the growth rate of town B: " << endl;
    cin >> townBpoprate;
    townBpoprate = townBpoprate/100;

    
    int numOfYears = 0;
    //int townAFinalPop = 0;
    //int townBFinalPop = 0;
    
    while (townApopulation <= townBpopulation){
        townApopulation = (townApopulation*townApoprate) + townApopulation;
        
        townBpopulation = (townBpopulation*townBpoprate) + townBpopulation;
        
        numOfYears++;
    }
    cout << "The number of years it will take for the population of town A" <<
        "to be greater than or equal to the population of town B: " << numOfYears << endl;
    cout << "Population of town A: " << townApopulation << endl;
    cout << "Population of town B: " << townBpopulation << endl;
    
    return 0;
}
