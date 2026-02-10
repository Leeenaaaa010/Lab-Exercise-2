#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Exercise 3:

    int numPeople;
    cout << "Enter the number of people attending the party: " ;
    cin >> numPeople;

    int numSlices;
    cout << "Enter the number of slices per pizza: ";
    cin >> numSlices;

    int slicesPerPerson;
    cout << "Enter the number of slices each person is exxpected to eat: ";
    cin >> slicesPerPerson;

    int totalSlices = numPeople * slicesPerPerson;
    int totalPizzas = (totalSlices + numSlices - 1) / numSlices;
    int slicesOrdered = totalPizzas * numSlices;
    int leftoverSlices = slicesOrdered - totalSlices;

    cout << endl;
    cout << "You will need to order " << totalPizzas << " pizzas." << endl;
    cout << "There will be " << leftoverSlices << " leftover slices." << endl;

/*
------------------------------------------------------------
OUTPUT
Launching: '/Users/aleenakhan/Desktop/CIS6/Mycpp25/labs'
Working directory: '/Users/aleenakhan/Desktop/CIS6/Mycpp25'
1 arguments:
argv[0] = '/Users/aleenakhan/Desktop/CIS6/Mycpp25/labs'
Enter the number of people attending the party: 10
Enter the number of slices per pizza: 8
Enter the number of slices each person is exxpected to eat: 3

You will need to order 4 pizzas.
There will be 2 leftover slices.
Process exited with status 0

Saving session...
...copying shared history...
...saving history...truncating history files...
...completed.
-----------------------------------------------------------
*/
    return 0;
}
