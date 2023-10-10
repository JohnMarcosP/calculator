    #include <iostream>
#include <cmath>
using namespace std;
class Calculator{
    public:
    void initialize()
    {
        cout << "|------------------------------|" << endl;
    cout << "| This is a calculator program |" << endl;
    cout << "| Program made by Joao Marcos  |" << endl;
    cout << "| Project #1                   |" << endl;
    cout << "|------------------------------|" << endl; 
    char operation;
    double num1, num2;
    do
    {   
        cout << "Enter one of the symbols below: \n";
        cout << "|===============================|\n";
        cout << "| | + | | - | | * | | ^ | | L | |"<< " " << "(L/l - For end the program)\n"; 
        cout << "| | s | | / |                   |" << " " << "(s - square root)\n";
        cout << "|===============================|\n";
        
        cin >> operation;
        if (operation == 'L' || operation == 'l')
        {
            break;
        }
        if (operation == '+' || operation == '-' || operation == '^' || operation == '*' || operation == '/')
        {
        cout << "Enter the first value: ";
        cin >> num1;
        cout << "Enter the second value: ";
        cin >> num2;    
        }else if (operation == 's')
        {
            cout << "Enter the element for the squad: ";
            cin >> num1;
        }
                

        double result;

        switch (operation)
        {
        case '+':
            result = soma(num1,num2);
            break;
        case '-':
            result = subtracao(num1,num2);
            break;
        case '^':
            result = potencia(num1,num2);
            break;
        case '*': 
            result = multi(num1,num2);
            break;
        case 's':
            result = sqrt(num1);
            break;
        case '/':
            result = div(num1,num2);
            break;
        default:
            cout << "Invalid operation!" << endl; 
            continue;
        }
        cout << "Result: "  << result << endl;
    } while (true);
    
    cout << "Program closed." << endl;
    }

private:
    double soma(double a, double b)
{
    return a+b;
}
double subtracao(double a, double b)
{
    return a-b;
}
double multi(double a, double b)
{
    return a*b;
}
double potencia(double a, double b)
{
    return pow(a,b);
}
double div(double a, double b)
{
    return a/b;
}     

};
