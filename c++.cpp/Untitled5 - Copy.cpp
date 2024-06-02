#include <iostream>
using namespace std;

// Function to display the main menu
void main_structure() {
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

// Function to display the time slots
void time_structure() {
    cout << "(1) 04:00 pm To 06:00 pm\n" << endl;
    cout << "(2) 06:00 pm To 08:00 pm\n" << endl;
    cout << "(3) 08:00 pm To 10:00 pm\n\n" << endl;
}

// Function to handle booking process
void process_booking(int& slot_status, char name[], const char* room, const char* time_slot) {
    if (slot_status == 0) {
        cout << "Enter Your Full Name (max 14 characters): ";
        cin.ignore();  // Ignore the newline character from previous input
        cin.getline(name, 15);  // Get the full name
        slot_status = 1;  // Mark the slot as booked
        cout << "\nYour booking is Confirmed for " << room << " at " << time_slot << " " << name << "\n\n" << endl;
    } else {
        cout << "Sorry!!\n" << endl;
        cout << "This time slot is booked by " << name << endl;
        char cancel_booking;
        cout << "\n\nDo you want to cancel this booking (y/n) >>> ";
        cin >> cancel_booking;
        if (cancel_booking == 'y' || cancel_booking == 'Y') {
            cout << "Booking Cancelled...\n" << endl;
            slot_status = 0;  // Mark the slot as available
        }
    }
}

// Function to handle room selection and booking
void handle_room_selection(int roomA_slots[], char roomA_names[][15], int roomB_slots[], char roomB_names[][15]) {
    char room_choice;
    int time_choice;
    bool valid_input;

    do {
        valid_input = true;
        main_structure();
        cout << "Select Room For Booking (A or B) >>> ";
        cin >> room_choice;

        if (room_choice == 'A' || room_choice == 'a') {
            cout << "Ok! You've selected \"Room A\"\n\n" << endl;
            time_structure();
            cout << "Select your timeslot please >>> ";
            cin >> time_choice;

            if (time_choice >= 1 && time_choice <= 3) {
                process_booking(roomA_slots[time_choice - 1], roomA_names[time_choice - 1], "Room A", 
                    (time_choice == 1) ? "04:00 pm To 06:00 pm" : (time_choice == 2) ? "06:00 pm To 08:00 pm" : "08:00 pm To 10:00 pm");
            } else {
                cout << "Invalid Time Slot! Please try again.\n";
                valid_input = false;
            }
        } else if (room_choice == 'B' || room_choice == 'b') {
            cout << "Ok! You've selected \"Room B\"\n\n" << endl;
            time_structure();
            cout << "Select your timeslot please >>> ";
            cin >> time_choice;

            if (time_choice >= 1 && time_choice <= 3) {
                process_booking(roomB_slots[time_choice - 1], roomB_names[time_choice - 1], "Room B", 
                    (time_choice == 1) ? "04:00 pm To 06:00 pm" : (time_choice == 2) ? "06:00 pm To 08:00 pm" : "08:00 pm To 10:00 pm");
            } else {
                cout << "Invalid Time Slot! Please try again.\n";
                valid_input = false;
            }
        } else {
            cout << "Invalid Input !! Kindly enter a valid input...\n" << endl;
            valid_input = false;
        }
    } while (!valid_input);
}

int main() {
    const int SLOTS = 3;
    int roomA_slots[SLOTS] = {0};
    int roomB_slots[SLOTS] = {0};
    char roomA_names[SLOTS][15] = {{0}};
    char roomB_names[SLOTS][15] = {{0}};

    char go_to_main_menu;

    do {
        handle_room_selection(roomA_slots, roomA_names, roomB_slots, roomB_names);
        cout << "Press (y) to go Main Menu >>> ";
        cin >> go_to_main_menu;
    } while (go_to_main_menu == 'y' || go_to_main_menu == 'Y');

    return 0;
}

