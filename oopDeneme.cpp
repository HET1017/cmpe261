#include <iostream>
using namespace std;

class potansiyel
{
public:
    float m, g, h;
};

class islem
{
public:
    void menu()
    {
        cout << "1)Sum of two numbers" << endl;
        cout << "2)Sub of two numbers" << endl;
        cout << "3)Mul of two numbers" << endl;
        cout << "4)Div of two numbers" << endl;
        cout << "Please choose..." << endl;
    }
    void sum(int number1, int number2)
    {
        cout << "Sum of numbers:";
        cout << number1 + number2 << endl;
    }
    void sub(int number1, int number2)
    {
        cout << "Sub of numbers:";
        cout << number1 - number2 << endl;
    }
    void mul(int number1, int number2)
    {
        cout << "Mul of numbers:";
        cout << number1 * number2 << endl;
    }

    void div(int number1, int number2)
    {
        cout << "Div of numbers:";
        cout << number1 / number2 << endl;
    }
};
int main()
{

    islem i;
    int n1, n2, choose;
    cout << "Please enter 2 number:" << endl;
    cin >> n1 >> n2;
    cout << "1.number:" << n1 << ", 2.number:" << n2 << endl;
    i.menu();
    cin >> choose;
    cout << "You chose:" << choose << ".operation" << endl;
    if (choose == 1)
    {
        i.sum(n1, n2);
    }
    else if (choose == 2)
    {
        i.sub(n1, n2);
    }
    else if (choose == 3)
    {
        i.mul(n1, n2);
    }
    else if (choose == 4)
    {
        i.div(n1, n2);
    }

    potansiyel p;
    p.m = 15;
    p.g = 2;
    p.h = 9.8;
    cout << p.m * p.h * p.g << "J" << endl;
}