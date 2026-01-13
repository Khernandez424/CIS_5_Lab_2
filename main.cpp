#include <iostream> 

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main () 
{
    int age = 0;
    int height = 0;

    cout << "What is your age?";
    cin >> age;

    cout << "What is your height in inches?";
    cin >> height; 

    // condition determine if you are old enough to ride 

if (age>=10 && height >=48)

    cout << "Yay! You are able to ride" << endl;

else 

    cout << "Sorry, you do not meet the requirements"<< endl;


 return 0;
}

// g++ main.cpp-o lab2
// ./main

