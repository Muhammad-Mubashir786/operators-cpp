#include<iostream>
using namespace std;

 //Function def for displaying main menu
void menuDisplay() {
    cout << "-----------------|Class Booking System |-----------------\n\n";
    cout << "\tRoom 'A'\t |\t\tRoom 'B'" << endl;
    cout << "\t\t\t |" << endl;
    cout << "04:00 pm To 06:00 pm | 04:00 pm To 06:00 pm" << endl;
    cout << "\t\t\t |" << endl;
    cout << "06:00 pm To 08:00 pm | 06:00 pm To 08:00 pm" << endl;
    cout << "\t\t\t |" << endl;
    cout << "08:00 pm To 10:00 pm | 08:00 pm To 10:00 pm" << endl;
    cout << "\t\t\t |\n\n" << endl;
}
 // function def to print time slot 
void timeStructure() {
    cout << "(1) 04:00 pm To 06:00 pm\n" << endl;
    cout << "(2) 06:00 pm To 08:00 pm\n" << endl;
    cout << "(3) 08:00 pm To 10:00 pm\n\n" << endl;
}

void processBooking(string room[], int slot) {
    if (room[slot] == 0) {
        cout << "Enter Your Full Name: ";
          getline(cin, room[slot]); // getline used in order to take full name of user
        cout << "\nYour booking is Confirmed for Room at ";
        switch(slot) {
            case 0: cout << "04:00 pm To 06:00 pm "; break;
            case 1: cout << "06:00 pm To 08:00 pm "; break;
            case 2: cout << "08:00 pm To 10:00 pm "; break;
        }
        cout << room[slot] << "\n\n" << endl;
    } else {
        cout << "Sorry!!\n" << endl;
        cout << "This time slot is booked by " << room[slot] << endl;
        char cancelBooking;
        cout << "\n\nDo you want to cancel this booking (y/n) >>> ";
        cin >> cancelBooking;
        if (cancelBooking == 'y' || cancelBooking == 'Y') {
            cout << "Booking Cancelled...\n" << endl;
            room[slot] = "";
        }
    }
}

int main() {
    string roomA[SLOTS] = {""};
    string roomB[SLOTS] = {""};
    char roomChoice;
    int timeChoice;
    
    while (true) {
        menuDisplay();
        cout << "Select Room For Booking (A or B) >>> ";
        cin >> roomChoice;
        
        if (roomChoice == 'A' || roomChoice == 'a') {
            cout << "Ok! You've selected \"Room A\"\n\n" << endl;
            timeStructure();
            cout << "Select your timeslot please >>> ";
            cin >> timeChoice;
            
            if (timeChoice >= 1 && timeChoice <= 3) {
                processBooking(roomA, timeChoice - 1);
            } else {
                cout << "Invalid Time Slot! Please try again.\n";
            }
        } else if (roomChoice == 'B' || roomChoice == 'b') {
            cout << "Ok! You've selected \"Room B\"\n\n" << endl;
            timeStructure();
            cout << "Select your timeslot please >>> ";
            cin >> timeChoice;
            
            if (timeChoice >= 1 && timeChoice <= 3) {
                processBooking(roomB, timeChoice - 1);
            } else {
                cout << "Invalid Time Slot! Please try again.\n";
            }
        } else {
            cout << "Invalid Input !! Kindly enter a valid input...\n" << endl;
        }
        
        char goToMainMenu;
        cout << "Press (y) to go Main Menu >>> ";
        cin >> goToMainMenu;
        if (!(goToMainMenu == 'y' || goToMainMenu == 'Y')) {
            break;
        }
    }
    
    return 0;
}

