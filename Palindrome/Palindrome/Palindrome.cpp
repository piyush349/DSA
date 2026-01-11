// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main()
{
    std::cout << "Hello World!\n";
	std::cout << isPalindrome("Piyush") << endl;
    std::cout << isPalindrome("dalad") << endl;
	return 0;

}

bool isPalindrome(string str) {
    // Write your code here.
    std::string cleanedString;
    for (char c : str) {
        if (std::isalnum(c)) {
            cleanedString += std::tolower(c);
        }
    }

    // Compare the cleaned string with its reverse
    int left = 0;
    int right = cleanedString.length() - 1;
    while (left < right) {
        if (cleanedString[left] != cleanedString[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
