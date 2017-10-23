#include <iostream>
#include "cmath"
#include "iomanip"
using namespace std;


int main()
{
    double width, distance, costUnderWater, costOverLand, mostUnderWater, totalCost, lineUnderWater = 0.0, lineOverLand = 0.0, minCost=300000;
    const double CONVERSION=5280;
   
    cout<<"PLease Enter the Width of the River"<<endl;
    cin>>width;
    cout<<"width "<<width<<endl;
    
    cout<<"Please Enter the Distance of the factory plant downstream from the power plant"<<endl;
    cin>>distance;
    cout<<"distance "<<distance<<endl;
    
    cout<<"Please Enter the cost to run power line over land"<<endl;
    cin>>costOverLand;
    costOverLand= costOverLand*CONVERSION;
    cout<<"Cost per Mile Over Land "<<costOverLand<<endl;
    
    cout<<"Please Enter the cost to run power line under water "<<endl;
    cin>>costUnderWater;
    
    costUnderWater=costUnderWater*CONVERSION;
    cout<<"Cost per mile Under Water "<<costUnderWater<<endl;
    
    mostUnderWater=sqrt(width*width+distance*distance);
    cout<<"Most Line that can be placed under Water "<<mostUnderWater<<endl;
    
    double i, j ;
    for (j=width; j<=mostUnderWater; j=j+0.1)
    {
        for (i=distance; i>=0; i=i-0.1)
        {
            totalCost=(i*costOverLand+j*costUnderWater);
            if (totalCost< minCost && (i+j)>=mostUnderWater)
            { minCost=totalCost;
                lineUnderWater=j;
                lineOverLand=i;
            }
        }
    }
    
    cout<<"Most Line needed under Water "<< lineUnderWater<<endl;
    cout<<"Most Line needed over land "<<lineOverLand<<endl;
    cout<<"total minimum Cost "<<minCost<<endl;
    return  0;
}