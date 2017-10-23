//  main.cpp
//  ch 6 p 20
//  Created by Feras Ahmed on 10/11/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.

#include <iostream>
# include <string>

using namespace std;

string vowelIdentifier (string);

int main() {
   
    vowelIdentifier("hello"); //testing the function to see if it works
    
    return 0;
}

string vowelIdentifier (string a){

    cout << "Enter a string: " << endl;
    cin >> a;
    
    int vowelCounter = 0;
    int i =0;
    while (i < a.length()){
        if (a[i] == 'a')
            vowelCounter++;
        if (a[i] == 'e')
            vowelCounter++;
        if (a[i] == 'i')
            vowelCounter++;
        if (a[i] == 'o')
            vowelCounter++;
        if (a[i] == 'u')
            vowelCounter++;
        i++;
    }
   
    cout << "The number of vowels in the string " << a << " is: " << vowelCounter << endl;
    
    return a;
}
