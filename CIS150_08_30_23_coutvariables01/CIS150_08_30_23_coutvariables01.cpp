//==========================================
//Author: Jack Grimes
//Date: 08-30-23
//Description: cout variables/chap2.
//==========================================
#include <iostream>

using namespace std;
int main() {
    string firsttri = "* \n**\n***\n\n";
    string secondtri = "  *\n * *\n* * *\n\n";
    string thirdtri = "  *\n **\n***";
    cout << "Hello this is a test!\n";
    cout << "This is another test" << endl;
    
    cout << "Hello this is a test!" << endl;
    cout << "This is another test" << endl;
    // Will display on different lines due to the \n

    //==========================================
    //Multiple string literals in one cout statement
    //==========================================
    cout << "Hello " << "my name is " << "Jack!" << endl;


    cout << firsttri << secondtri << thirdtri;
    return 0;
}