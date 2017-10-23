//  main.cpp
//  ch 6 p 24
//  Created by Feras Ahmed on 10/11/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.

# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

void getInput (double& CP, double& p1, double& p2);
void calculateResults (double CP, double p1, double p2, double& CR, double& LR);
void outputResults (double CR, double LR);

int main (){

    double currentPrice =0;
    double priceYrAgo = 0;
    double price2YrAgo = 0;
    double currentRate = 0;
    double oneYrAgoRate = 0;
    
    
    getInput(currentPrice, priceYrAgo, price2YrAgo);
    calculateResults(currentPrice, priceYrAgo, price2YrAgo, currentRate, oneYrAgoRate);
    outputResults(currentRate, oneYrAgoRate);
    
    //cout << "\n The values of current price, price1yr, and price 2yr are: " << currentPrice << "\t" << priceYrAgo << "\t" << price2YrAgo << endl;
    
    //cout << "\n The values of current rate and one yr ago rate are: " << currentRate << "\t" << oneYrAgoRate;
    
    return 0;

}


void getInput (double& CP, double& p1, double& p2){

    cout << "Enter the current price of an item: " << endl;
    cin >> CP;
    
    cout << "Enter the price of the same item one year ago: " << endl;
    cin >> p1;
    
    cout << "Enter the price of the same item two years ago: " << endl;
    cin >> p2;
    

}

void calculateResults (double CP, double p1, double p2, double& CR, double& LR){
    CR = (CP - p1)/p1;

    LR = (p1-p2)/p2;

}

void outputResults (double CR, double LR){
    
    cout << "\n Current rate of inflation is: "<< CR << endl;
    cout << "\n Last year's inflation rate is: " << LR << endl;

    if (CR > LR)
        cout << "\n The inflation rate is increasing." << endl;
    else
        cout << "\n The inflation rate is decreasing." << endl;
}