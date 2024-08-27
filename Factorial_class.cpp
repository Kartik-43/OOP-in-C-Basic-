#include <iostream>

using namespace std;


class Factorial
{
    int num, res;
public :
    Factorial()
    {
        num = 0;
        res = 1;
        cout << "\nDefault Constructor called !" << endl;
    }

    Factorial(int a)
    {
        num = a;
        res = calculate();
        cout << "\nParameterized Constructor called !" << endl;
    }

    Factorial(Factorial &o)
    {
        num = o.num;
        res = o.res;
        cout << "\nCopy Constructor called !" << endl;
    }

    int calculate(void);

    void display(void);
};


int Factorial :: calculate(void)
{
    res = 1;

    for (int i = 1; i <= num; i++)
    {
        res *= i;
    }

    return res;
}


void Factorial :: display(void)
{
    cout << "The factorial of the number " << num << " is ==> " << res << "\n" << endl;
}


int main()
{
    int a;

    cout << "\n\nEnter the number you want factorial of :- ";
    cin >> a;

    Factorial o1;
    o1.display();

    Factorial o2(5);
    o2.display();

    Factorial o3(o2);
    o3.display();

    Factorial o4(a);
    o4.display();

    return 0;
}
