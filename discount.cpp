#include <iostream>
using namespace std;

int main()

{
    float dsc;
    float sub;
    float price;
    float temp;
    
    cout << "Enter original price: ", cin >> price;
    cout << "Enter discount: ", cin >> dsc, cout << endl;
    
    sub = (dsc / 100.0) * price;
    temp = (dsc / 100.0) * price;
    sub = price - sub;
    cout << "Price after discount: " << sub;
    cout << "\nYou save: " << temp;
    
    return 0;
}
