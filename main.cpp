// Mark Dowling
// C00216994
// Lab 5
#include <iostream>

using namespace std;

int main()
{

    int i,n ;

    double x[100] = {0};
    double y[100] = {0};

   do
   {
       cout << "Enter number of datapoints : ";
       cin>> n ;
   }
   while
    ((n<=0)||(n>100));

   for  (i=0;i<n;i++)
   {
       cout << "Enter x : " ;
       cin >> x[i];
       cout << "Enter y : ";
       cin >> y[i];
   }

    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, avgX = 0, avgY = 0, slope=0, intercept = 0;


   for (i=0;i<n;i++)
   {
       sumX = sumX + x[i];
       sumY += y[i]; // sumY = SumY + y[i]
       sumXY += x[i] * y[i];
       sumX2 += x[i]*x[i];
   }

    avgX = sumX / n;
    avgY = sumY / n;


    cout << endl;
    cout << "sum of X: " << sumX << endl;
    cout << "Sum of Y: " << sumY << endl;
    cout << "Avg X: " << avgX << endl;
    cout << "Avg Y: " << avgY << endl;
    cout << "Product of XY: " << sumXY << endl;
    cout << "X squared is : " << sumX2 << endl;



    slope = ((n*sumXY) - (sumX * sumY)) / ((n*sumX2) - (sumX)*(sumX));
    intercept = avgY - (slope * avgX);

    //Displays the slope and intercept to the user
    cout << "Slope: " << slope << endl;
    cout << "Point of interception: "<< intercept << endl;

    return 0;
}
