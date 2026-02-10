#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int fav_num;

    cout << "Enter your favorite number: " << endl;
    cin >> fav_num;

    int result = fav_num;
    result = result * 2;
    result = result + 10;
    result = result / 2;
    result = result - fav_num;

    cout << "Your magic number is... " << result << "!!! yayyyy!" << endl;
}
    /*
--------------------------------------------------------------    
    //OUTPUT:
    Working directory: '/Users/aleenakhan/Desktop/CIS6/Mycpp25'
    1 arguments:
    argv[0] = '/Users/aleenakhan/Desktop/CIS6/Mycpp25/labs'
    Enter your favorite number: 
    8
    Your magic number is... 5!!! yayyyy!
    Process exited with status 0

    Saving session...
    ...copying shared history...
    ...saving history...truncating history files...
    ...completed.

---------------------------------------------------------------
*/