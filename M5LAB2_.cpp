//Colby Watts
//CSC-134
//09NOV2025

#include <iostream>
#include <iomanip> // Needed for setprecision and fixed

using namespace std;

// Function Prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

// Function Definitions

/**
 * Asks the user to enter a rectangle's length, and returns that value.
 * @return The length as a double.
 */
double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    // Fixed: The original code in main was missing a semicolon here,
    // and this function needs to perform the input operation.
    if (!(cin >> length)) {
        // Simple error handling for non-numeric input (optional but good practice)
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please try again." << endl;
        // In a real program, you'd likely loop until valid input is given.
        
    }
    return length;
}

/**
 * Asks the user to enter a rectangle's width, and returns that value.
 * @return The width as a double.
 */
double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    // Fixed: Similar issue as getLength, it needs to handle the input.
    if (!(cin >> width)) {
        // Simple error handling
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please try again." << endl;
    }
    return width;
}

/**
 * Calculates the area of a rectangle.
 * @param length The length of the rectangle.
 * @param width The width of the rectangle.
 * @return The calculated area as a double.
 */
double getArea(double length, double width) {
    // Fixed: The original code in main used 'lengt' instead of 'length'
    return length * width;
}

/**
 * Displays the length, width, and area in a well-formatted output.
 * @param length The length of the rectangle.
 * @param width The width of the rectangle.
 * @param area The area of the rectangle.
 */
void displayData(double length, double width, double area) {
    // Used iomanip for well-formatted, precise output
    cout << "\n--- Rectangle Area Calculation ---" << endl;
    cout << fixed << setprecision(2); // Set precision to 2 decimal places

    // Fixed: The original code in main had a typo for 'length' as 'lenght'
    cout << "Length: " << setw(10) << length << endl;
    cout << "Width: " << setw(11) << width << endl;
    cout << "Area: " << setw(12) << area << endl;
    cout << "--------------------------------" << endl;
}

// Fixed and Completed Main Function
int main() {
    double length = 0.0;
    double width = 0.0;
    double area = 0.0;

    // Call the input functions
    length = getLength();
    width = getWidth();

    // Call the calculation function
    area = getArea(length, width);

    // Call the output function
    displayData(length, width, area);

    return 0;
}