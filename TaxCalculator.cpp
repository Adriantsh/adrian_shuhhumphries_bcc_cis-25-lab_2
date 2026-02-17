#include <iostream>
#include <iomanip>
using namespace std;

const double tax_rate = 0.075;

int main(){

    double price, sales_tax, total_cost;

    cout << fixed << setprecision(2);
    cout << "Enter the price of the item:" << endl;
    cin >> price;
    sales_tax = price * tax_rate;
    total_cost = price + sales_tax;
    cout << "Origonal Price: $" << price << endl;
    cout << "Sales Tax: $" << sales_tax << endl;
    cout << "Total Cost: $" << total_cost << endl;

    return 0;
}