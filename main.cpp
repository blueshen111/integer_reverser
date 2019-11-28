// Jordan Steer-Furderer
// CIS 25
// This purpose of this program is to reverse a given integer.
#include <iostream>

using namespace std;

    void reverseInteger(unsigned int number){
        if(number == 0)
        return;
        else{

            cout << number % 10;

            reverseInteger(number/10);
        }
    }


int main()

{

reverseInteger(645);

    return 0;
}
