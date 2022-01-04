#include <iostream>
#include <string>
using namespace std;

int validateUserInput(int firstNum, int secondNum);

int main ()
{
    // variables
    bool validator = true;
    int firstNum = 0;
    int secondNum = 0;
    int numB1 = 0;
    int evenSum = 0;
    int baseNum = 1;
    int squareNum = 0;
    int oddSquareSum = 0;
    int numD1 = 0;
    int numD2 = 0;
    char letter = 65;

    //a
    while (validator == true)
    {
        cout << "Enter two positive numbers." << endl;
        cout << "The first number must be less than the second number:" << endl;
        cout << "Enter numbers: ";
        cin >> firstNum >> secondNum;
        validator = validateUserInput(firstNum, secondNum);
    }
    cout << endl;

    // b
    numB1 = firstNum;
    cout << "Odd integers between " << firstNum << " and " << secondNum << " are:" << endl;
    while (numB1 <= secondNum)
    {
        if (numB1 % 2 == 0)
        {
            evenSum = evenSum + numB1;
        }
        else
        {
            cout << numB1 << " ";
        }
        numB1++;
    }
    cout << endl << endl;
    cout << "Sum of even integers between " << firstNum << " and " << secondNum << " = " << evenSum << endl;
    cout << endl;

    // c
    cout << "Square number of numbers: " << endl;
    while (baseNum <= 10)
    {
        cout << baseNum << "\t";
        squareNum =  baseNum * baseNum;
        cout << squareNum << endl;
        baseNum++;
    }
    cout << endl;

    // d
    numD1 = firstNum;
    while (numD1 <= secondNum)
    {
        numD2 = numD1;
        if (numD2 % 2 == 1)
        {
            numD2 = numD2 * numD2;
            oddSquareSum = oddSquareSum + numD2;
        }
        numD1++;
    }
    cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << " = " << oddSquareSum << endl;
    cout << endl;

    // e
    cout << "Upper case letters are: ";
    while (letter < 91)
    {
        cout << letter << " ";
        letter++;
    }
    cout << endl;

    return 0;
}

int validateUserInput(int firstNum, int secondNum)
{
    bool valid = true;
    while (valid == true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl;
            cout << "Incorrect Input." << endl;
            cout << "Please try again." << endl;
            cout << endl;
            return true;
        }
        else if (firstNum >= secondNum)
        {
            cout << endl;
            cout << "The first number must be LESS than the second number!" << endl;
            cout << "Please try again. " << endl;
            cout << endl;
            return true;
        }
        else if (firstNum < 0 || secondNum < 0)
        {
            cout << endl;
            cout << "No NEGATIVE numbers!" << endl;
            cout << "Please try again. " << endl;
            cout << endl;
           return true;
        }
        else
        {
            return false;
        }
    }
    return true;
}

// b function
