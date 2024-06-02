#include <iostream>
using namespace std;

int burger() {
    int option;
    cout << "\t\t\t\tPress '1' Zinger Burger......................Rs:299" << endl;
    cout << "\t\t\t\tPress '2' Zinger Burger with Cheese..........Rs:349" << endl;
    cout << "\t\t\t\tPress '3' Chicken Burger.....................Rs:220" << endl;
    cout << "\t\t\t\tPress '4' Chicken Burger with Cheese.........Rs:280" << endl;
    cout << "\t\t\t\tPress '5' Tower Burger.......................Rs:380" << endl;
    cout << "\t\t\t\tPress '0' To Go Back To Menu\n" << endl;
    cout << "Please select any option: ";
    cin >> option;
    return option;
}

int paratha() {
    int option;
    cout << "\t\t\t\t\t   *----PARATHA ROLLS----*" << endl;
    cout << "\t\t\t\tPress '1' Zinger Paratha.....................Rs:299" << endl;
    cout << "\t\t\t\tPress '2' Zinger Cheese Paratha..............Rs:360" << endl;
    cout << "\t\t\t\tPress '3' Chicken Paratha....................Rs:260" << endl;
    cout << "\t\t\t\tPress '4' Vegetarian Paratha.................Rs:150" << endl;
    cout << "\t\t\t\tPress '0' To Go Back To Menu\n" << endl;
    cout << "Please select any option: ";
    cin >> option;
    return option;
}

int shawarma() {
    int option;
    cout << "\t\t\t\t\t    *------SHAWARMA-----*" << endl;
    cout << "\t\t\t\tPress '1' Zinger Shawarma....................Rs:260" << endl;
    cout << "\t\t\t\tPress '2' Zinger Cheese Shawarma.............Rs:299" << endl;
    cout << "\t\t\t\tPress '3' Chicken Shawarma...................Rs:180" << endl;
    cout << "\t\t\t\tPress '4' Vegetarian Shawarma................Rs:160" << endl;
    cout << "\t\t\t\tPress '0' To Go Back To Menu\n" << endl;
    cout << "Please select any option: ";
    cin >> option;
    return option;
}

int biryani() {
    int option;
    cout << "\t\t\t\t\t     *-----BIRYANI-----*" << endl;
    cout << "\t\t\t\tPress '1' Chicken Biryani.................Rs:150" << endl;
    cout << "\t\t\t\tPress '2' Bombay Biryani..................Rs:130" << endl;
    cout << "\t\t\t\tPress '3' Hyderabadi Chicken Biryani......Rs:170" << endl;
    cout << "\t\t\t\tPress '4' Tikka Biryani...................Rs:200" << endl;
    cout << "\t\t\t\tPress '0' To Go Back To Menu\n" << endl;
    cout << "Please select any option: ";
    cin >> option;
    return option;
}

int pizza() {
    int option;
    cout << "\t\t\t\t\t     *------PIZZA-----*" << endl;
    cout << "\t\t\t\tPress '1' Cheese Pizza...!" << endl;
    cout << "\t\t\t\tPress '2' Chicken Tikka Pizza...!" << endl;
    cout << "\t\t\t\tPress '3' Chicken Fajita Pizza...!" << endl;
    cout << "\t\t\t\tPress '0' To Go Back To Menu\n" << endl;
    cout << "Please select any option: ";
    cin >> option;
    return option;
}

int salad() {
    int option;
    cout << "\t\t\t\t\t     *------SALAD------*" << endl;
    cout << "\t\t\t\tPress '1' Russian Salad....................Rs:349" << endl;
    cout << "\t\t\t\tPress '2' Chicken Apple Salad..............Rs:449" << endl;
    cout << "\t\t\t\tPress '3' Pine Apple Salad.................Rs:480" << endl;
    cout << "\t\t\t\tPress '0' To Go Back To Menu\n" << endl;
    cout << "Please select any option: ";
    cin >> option;
    return option;
}

int main() {
    string name;
    cout << "\n\t\t\t\t*--------FOOD ORDERING MANAGEMENT SYSTEM--------*\n\n";
    cout << "  Please enter your name: ";
    getline(cin, name);

    while (true) {
        cout << "\n\n  Assalam u Alaikum..! " << name << "." << "\n  What would you like to order?\n\n";
        cout << "\n\t\t\t\t\t  *----------MENU----------*\n" << endl;
        cout << "Press '1' BURGER" << endl;
        cout << "Press '2' PARATHA ROLLS" << endl;
        cout << "Press '3' SHAWARMA" << endl;
        cout << "Press '4' BIRYANI" << endl;
        cout << "Press '5' PIZZA" << endl;
        cout << "Press '6' SALAD" << endl;
        cout << "Press '0' To Exit\n" << endl;
        cout << "Please enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the system. Thank you!" << endl;
            break;
        }

        int itemChoice;
        switch (choice) {
            case 1:
                itemChoice = burger();
                break;
            case 2:
                itemChoice = paratha();
                break;
            case 3:
                itemChoice = shawarma();
                break;
            case 4:
                itemChoice = biryani();
                break;
            case 5:
                itemChoice = pizza();
                break;
            case 6:
                itemChoice = salad();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                continue;
        }

    }

    return 0;
}

