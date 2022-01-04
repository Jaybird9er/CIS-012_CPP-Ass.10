#include <iostream>
using namespace std;

int test (int num1, int num2);
void sample (int n1, int n2);

int main ()
{
    int num1 = 0;
    int num2 = 0;
    bool valid = true;


    while (valid == true)
    {
        cout << "Enter a big and small number: ";
        cin >> num1 >> num2;
        valid = test(num1, num2);
    }
    cout << endl << endl;
    cout << endl << num2;
    cout << endl << num1;
    cout << endl << "It worked!";

    cout << endl << endl;
    sample(1, 2);
    return 0;
}

int test (int num1, int num2)
{
    while (num1 > num2)
    {
        return false;
    }
    return true;
}

void sample (int n1, int n2)
{
    cout << n1 << " " << n2;
}
