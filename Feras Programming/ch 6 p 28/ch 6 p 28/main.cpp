//
//  main.cpp
//  ch 6 p 28
//
//  Created by Feras Ahmed on 10/11/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int costRunUnderWater = 7;
const int costRunOverLand = 9;
const int conversion = 5280;

int main() {
    // insert code here...
    
    double width =0;
    double mostUnderWater =0;
    double lineUnderWater =0;
    double lineOverLand =0;
    double length =0;
    double costUnderWater = 0;
    double costOverLand =0;
    double totalCost =0;
    
    cout << "Enter the width of the river in miles: " << endl;
    cin >> width;
    
    cout << "Enter the length of the river: " << endl;
    cin >> length;
    
    cout << "Enter the cost of laying the power line under water: " << endl;
    cin >> costUnderWater;
    costUnderWater *= conversion;
    
    cout << "Enter the cost of laying the power line over land: " << endl;
    cin >> costOverLand;
    costOverLand *= conversion;
    
    mostUnderWater=sqrt(width*width+length*length);
    cout<<"Most Line that can be placed under Water "<<mostUnderWater<<endl;
    
    if (costUnderWater>costOverLand)
    {
        lineUnderWater=width;
        lineOverLand=length;
        totalCost= (costUnderWater*width+costOverLand*length);
    }
    else if (costUnderWater<costOverLand)
    {
        lineUnderWater=mostUnderWater;
        lineOverLand=0;
        totalCost=(costUnderWater*mostUnderWater+lineOverLand*costOverLand);
    }
    else if (costOverLand==costUnderWater)
    {
        lineOverLand=0;
        lineUnderWater=mostUnderWater;
        totalCost=costUnderWater*mostUnderWater;
    }
    
    cout << "\n Lenghts of the line running under water and over land. " << endl;
    cout<< "Most Line needed under water: "<< lineUnderWater<<endl;
    cout<< "Most Line needed over land:  "<<lineOverLand<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Total minimum Cost $"<<totalCost<<endl;
    
    
    return 0;
}