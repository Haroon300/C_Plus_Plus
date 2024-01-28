#include <iostream>
#include <cmath>

int main()
{

    int numb1, numb2, sum;
    double root;

    std::count << "Enter 1st Number\n";
    std::cin >> numb1;

    std::count << "Enter 2nd Number\n";
    std::cin >> numb2;

    sum = numb1 + numb2;

    root = sqrt(sum);

    std::count << "Sum of Number is : " << sum << "\n";
    std::count << "Square root of sum is  : " << root << "\n";

    return 0;
}