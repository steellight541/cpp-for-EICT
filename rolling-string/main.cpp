#include <iostream>
#include <windows.h>

// Function to send a character to the console
void sendChar(char c)
{
    std::cout << c;
    Sleep(50);
}

// Function to remove the last character from the console
void removeLastChar()
{
    std::cout << "\b \b";
}


// Function to display a rolling string
void rollingString(std::string text)
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < alphabet.length(); j++)
        {
            sendChar(alphabet[j]);
            if (alphabet[j] == text[i]) break;
            removeLastChar();
        }
    }
    std::cout << std::endl;
}


int main() {
    rollingString("hottentottenteetentententoonstelling");
    return 0;
}


