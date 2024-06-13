#include "function.h"
#include <fstream>
#include <string>

int main() { // Inputting the file
    ifstream infile("A1input.txt");
    for (int i = 0; i < 100; i++) {
        int num = 0;
        infile >> num;
        pushBack(num);
    }
    view();
    for (;;) { // An infinite loop with a return at the end
        int uc;
        cout << "\nWhat would you like to do?: (Enter 1-4)\n"
            << "1. Add a number to the end\n"
            << "2. Erase a number\n"
            << "3. Modify a number\n"
            << "4. Search for a number index\n\n";
        cin >> uc;
        switch (uc) {
            int ind;
            int num;
        case 1:
            cout << "\nWhat number would you like to add?:\n";
            cin >> num;
            pushBack(num);
            break;
        case 2:
            cout << "\nWhat index would you like to erase?:\n";
            cin >> ind;
            erase(ind);
            break;
        case 3:
            cout << "\nWhat index would you like to change?:\n";
            cin >> ind;
            cout << "\nWhat number would you like to replace it with?:\n";
            cin >> num;
            mod(ind, num);
            break;
        case 4:
            cout << "\nWhich number's index would you like to find?:\n";
            cin >> num;
            intSearch(num);
            break;
        default:
            cout << "\nThat is not a valid choice\n";
        }
        view();
        char con;
        cout << "\nContinue?: (Y/N)\n";
        cin >> con;
        if (toupper(con) != 'Y')
            return 0;
    }
}