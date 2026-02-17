#include <iostream>
using namespace std;

int main() {
    int ppl, slices_ppiz, slices_pper, slices_needed, total_slices, whole_pizzas, leftover_slices;
    int pizzas_eaten, add_slices;

    cout << "How many people are attending the party?" << endl;
    cin >> ppl;
    cout << "How many slices are in a pizza?" << endl;
    cin >> slices_ppiz;
    cout << "How many slices will each person eat?" << endl;
    cin >> slices_pper;

    slices_needed = ppl * slices_pper;

    if (slices_needed % slices_ppiz == 0) {
        whole_pizzas = slices_needed / slices_ppiz;
        pizzas_eaten = whole_pizzas;
    } else {
        whole_pizzas = slices_needed / slices_ppiz + 1;
        pizzas_eaten = whole_pizzas - 1;
    }

    total_slices = whole_pizzas * slices_ppiz;
    leftover_slices = total_slices - slices_needed;
    add_slices = slices_ppiz - leftover_slices;
 
    cout << "You will need to order " << whole_pizzas << " pizzas." << endl;
    cout << "There will be " << leftover_slices << " leftover slices." << endl;
    cout << pizzas_eaten << " whole pizzas will be eaten." << endl;
    cout << add_slices << " additional slices will be eaten from the last pizza." << endl; 

    return 0;
}