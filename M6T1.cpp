//colby watts
//M6T1
//CSC-134

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function Prototypes
void part1_no_array();
void part2_with_array();
void print_ascii_bar_chart(const int counts[], int size);

// --- Part 1: No Array ---
void part1_no_array() {
    cout << "## Part 1: Car Count (No Array)" << endl;
    cout << "-----------------------------------" << endl;

    int total_cars = 0;
    int car_count;
    const int NUM_DAYS = 5; // Monday through Friday

    // Use a string array to provide day names for better output
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    // Loop through each day from Monday to Friday
    for (int i = 0; i < NUM_DAYS; ++i) {
        cout << "Enter the car count for " << days[i] << ": ";
        // Get the count for the current day
        // NOTE: In a real application, you might use 'cin.fail()' to handle bad input.
        if (!(cin >> car_count)) {
            // Handle bad input and exit the function gracefully
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear(); // Clear error flags
            cin.ignore(10000, '\n'); // Discard bad input
            return;
        }

        // Add the current day's count to the total
        total_cars += car_count;
    }

    // Calculate the average
    // Use static_cast to perform floating-point division for the average
    double average_cars = static_cast<double>(total_cars) / NUM_DAYS;

    // Display the results
    cout << "\n### Results from Part 1" << endl;
    cout << "Total cars counted over " << NUM_DAYS << " days: **" << total_cars << "**" << endl;
    cout << fixed << setprecision(2); // Set output to two decimal places
    cout << "Average cars per day: **" << average_cars << "**" << endl;
    cout << "-----------------------------------" << endl << endl;
}

// --- Helper Function for Part 2: ASCII Bar Chart ---
void print_ascii_bar_chart(const int counts[], int size) {
    cout << "\n### Weekly Car Count ASCII Bar Chart" << endl;

    // Day names array
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri"};

    // Iterate through the array to print the bar for each day
    for (int i = 0; i < size; ++i) {
        // Print the day name, left-aligned
        cout << left << setw(5) << days[i] << " | ";

        // Print the bar using '*' for each car (or every N cars for a larger scale)
        for (int j = 0; j < counts[i]; ++j) {
            cout << "*";
        }
        
        // Print the numerical count at the end of the bar
        cout << " (" << counts[i] << " cars)" << endl;
    }
}

// --- Part 2:With Array ---
void part2_with_array() {
    cout << "## Part 2: Car Count (With Array)" << endl;
    cout << "-----------------------------------" << endl;

    const int NUM_DAYS = 5; // Monday through Friday
    int daily_counts[NUM_DAYS]; // Array to store car count for each day
    int total_cars = 0;
    
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    // Loop through each day from Monday to Friday
    for (int i = 0; i < NUM_DAYS; ++i) {
        cout << "Enter the car count for " << days[i] << ": ";
        
        // Get the count and store it directly in the array at index i
        if (!(cin >> daily_counts[i])) {
            // Handle bad input and exit the function gracefully
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear(); // Clear error flags
            cin.ignore(10000, '\n'); // Discard bad input
            return;
        }

        // Add the current day's countto the total
        total_cars += daily_counts[i];
    }

    // Calculate the average
    double average_cars = static_cast<double>(total_cars) / NUM_DAYS;

    // Display the results
    cout << "\n### Results from Part 2" << endl;
    cout << "Total cars counted over " << NUM_DAYS << " days: **" << total_cars << "**" << endl;
    cout << fixed << setprecision(2);
    cout << "Average cars per day: **" << average_cars << "**" << endl;

    // Print out the full week's data and the ASCII bar chart
    cout << "\n### Full Week's Daily Data" << endl;
    for (int i = 0; i < NUM_DAYS; ++i) {
        cout << days[i] << ": " << daily_counts[i] << " cars" << endl;
    }

    // Call the helper function to print the bar chart
    print_ascii_bar_chart(daily_counts, NUM_DAYS);
    cout << "-----------------------------------" << endl;
}

// --- Main Function ---
int main() {
    // Call Part 1 function
    part1_no_array();

    // Call Part 2 function
    part2_with_array();

    return 0;
}