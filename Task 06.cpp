#include <iostream>
using namespace std;

int main() { // Simple Traffic Light Simulation
    char color;
    cout << "\t\tTraffic lights indicate";
    cout << "\nRed => R\n" << "Green => G\n" << "Yellow => Y\n";
    cout << "Enter a color: ";

    cin >> color;
    switch (color) {
        case 'R':
            cout << "R => Stop\n";
            break;
        case 'G':
            cout << "G => Go\n";
            break;
        case 'Y':
            cout << "Y => Slow down\n";
            break;
        default:
            cout << "Invalid input\n";
            break;
    }
    return 0;
}
