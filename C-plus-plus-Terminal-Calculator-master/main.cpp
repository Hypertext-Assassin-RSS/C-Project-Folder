#include <iostream>

using namespace std;

int main() {
    int numberOne;
    int numberTwo;
    int Total;
    char Operator;
    
    cout << "Enter Number 1:";
    cin >> numberOne;
    
    cout << "Enter Number 2:";
    cin >> numberTwo;
    
    cout << "Enter Operator:";
    cin >> Operator;

    switch (Operator) {
        case '+' : Total = numberOne + numberTwo;
            cout << "Your Total is :" << Total;
            break;
        case '-' : Total = numberOne - numberTwo;
            cout << "Your Total is :" << Total;
            break;
        case '*' : Total = numberOne * numberTwo;
            cout << "Your Total is :" << Total;
            break;
        case '/': Total = numberOne / numberTwo;
            cout << "Your Total is :" << Total;
            break;
        default: cout << "Error";

    }
    
    return 0;
}
