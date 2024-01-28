
#include <iostream>
#include <cmath>

int main() {

    int dollar, quarter, dime, nickel, penny;
    double inputAmount;
    
    std :: cout << "Enter Amount here\n";
    std :: cin >> inputAmount;
    
    penny = static_cast<int>(round(inputAmount*100));
    
    dollar = penny / 100;
    penny %= 100;
    
    quarter = penny / 25;
    penny %= 25;
    
    dime = penny / 10;
    penny %= 10;
    
    nickel = penny / 5;
    penny %= 5;
    
    
    std :: cout << "Dollars: "<< dollar <<"\n";
    std :: cout << "Quarters: " << quarter <<"\n";
    std :: cout << "Dimes: " << dime <<"\n";
    std :: cout << "Nickels: " << nickel <<"\n";
    std :: cout << "Pennies: " << penny <<"\n";
    
    
    return 0;
}