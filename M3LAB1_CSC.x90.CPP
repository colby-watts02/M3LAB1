// choose a door
// CSC-134
// M3LAB1 example2
// Colby Watts
// 05OCT2025

#include <iostream>
using namespace std;

int main() {
    
    // declare the variable needed
    int choice; 
    
    // Flag to control the loop and check validity
    bool validInput = false;

    cout << "You encounter a fearsome dragon! What do you do?" << endl;
    
    // Use a do-while loop to repeat the prompt until input is valid
    do {
        // --- 1. Ask the question ---
        cout << "\nChoose your action:" << endl;
        cout << "1. Attack the Dragon ⚔️" << endl;
        cout << "2. Run away! 🏃💨" << endl;
        cout << "Type 1 or 2: "; 
        
        // --- 2. Get user ---
        if (!(cin >> choice)) {
            cout << "\n🚫 Invalid input type. Please enter a number (1 or 2).\n";
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            continue; 
        }

        // --- 3. Decision based on the choice ---
        if (choice == 1) {
            cout << "\n💥 You bravely raise your sword and charge! A fierce battle begins..." << endl;
            validInput = true; // Set the flag to exit the loop
        }
        else if (choice == 2) {
            cout << "\n💨 You turn tail and sprint, escaping with your life... and your pride, mostly intact." << endl;
            validInput = true; // Set the flag to exit the loop
        }
        else {
            // If choice is a number but not 1 or 2
            cout << "\n❌ That is not a valid action. You must choose 1 or 2 before the dragon breathes fire!" << endl;
        }

    } while (validInput == false); // The loop continues as long as input is invalid

    // finish up
    cout << "\nAdventure completed (for now)!" << endl;
    return 0;
     // exit without error