#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
double num1, num2, num3, num4;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    double product = num1 * num2 * num3 * num4;
    double average = (num1 + num2 + num3 + num4) / 4.0;
    cout << fixed << setprecision(3);

    // Display the product
    cout << "The product of the four numbers is: " << product << endl;
    cout << "The average of the four numbers is: " << average << endl;

    return 0;
}
