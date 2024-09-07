//  assignment 2
//
//  Created by maya nachiappan on 9/6/24.
//
// assignment to show the sales tax, estate tax, county tax and total tax needed to be paid on an income of 95,000.

#include <iostream>
using namespace std;

int main ()
{
    float income;
    income = 95000;
    const double estateTax = 0.04*income; // the estate tax is 4% of the income
    const double countyTax = 0.02*income; // the county tax is 2% of the income
    float totalTax =countyTax + estateTax;
    cout << "The income gained is: "<< income << endl;
    cout << "The estate tax on this income is: "<< estateTax << endl;
    cout << "The county tax on this income is: "<< countyTax << endl;
    cout << "The total tax on this income is: "<< totalTax << endl;
    cout << "The final profit after tax is " << income - totalTax << endl;
    return 0;
}

