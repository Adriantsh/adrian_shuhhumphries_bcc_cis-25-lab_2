#include <iostream>
using namespace std;

int main() {
    int fav_num, magic_num;
    cout << "Please enter your favorite number. Integers only!" << endl;
    cin >> fav_num;
    magic_num = 2 * fav_num;
    magic_num = magic_num + 10;
    magic_num = magic_num / 2;
    magic_num = magic_num - fav_num;
    cout << "The magic number is: " << magic_num << endl;

    return 0;
}