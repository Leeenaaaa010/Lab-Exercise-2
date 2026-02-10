#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double SALES_TAX_RATE = 0.075;

    double price;
    cout << "Enter the price of an item: ";
    cin >> price;
    double salesTax = price * SALES_TAX_RATE;
    double totalCost = salesTax + price;

    
    cout << fixed << setprecision(2);
    cout << "Original Price: $" << price << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Total Cost: $" << totalCost << endl;
 
    /*
--------------------------------------------------------------
    OUTPUT:
    Launching: '/Users/aleenakhan/Desktop/CIS6/Mycpp25/labs'
    Working directory: '/Users/aleenakhan/Desktop/CIS6/Mycpp25'
    1 arguments:
    argv[0] = '/Users/aleenakhan/Desktop/CIS6/Mycpp25/labs'
    Enter the price of an item: 19.99
    Original Price: $19.99
    Sales Tax: $1.50
    Total Cost: $21.49
    Process exited with status 0

    Saving session...
    ...copying shared history...
    ...saving history...truncating history files...
    ...completed.

    [Process completed]
----------------------------------------------------   
*/
}