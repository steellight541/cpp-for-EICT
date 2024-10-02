#include <iostream>
#include <limits>

using namespace std;

int sum(int values[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += values[i];
    }
    return result;
}

int calcSum()
{

    int numbers[] = {2, 8, 15};
    const int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Sum of numbers: " << sum(numbers, size) << endl;

    return 0;
}

void pickNumber()
{
    int number = 0;
    do
    {
        cout << "Please enter a number between 1 and 10: ";
        cin >> number;

        // Check if the input failed (i.e., it's not a number)
        if (cin.fail())
        {
            cin.clear();                                         // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the invalid input
            cout << "Invalid input. Please enter a number between 1 and 10." << endl;
            number = 0; // Reset number to ensure the loop continues
        }
    } while (number < 1 || number > 10);

    cout << "You entered: " << number << endl;
}

int main()
{
    calcSum();
    pickNumber();
    return 0;
}
