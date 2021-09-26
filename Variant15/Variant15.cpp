// Variant15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    double X1, X2, dX, a, b, c;
    cout << "enter X1: ";
    cin >> X1;
    cout << "enter X2: ";
    cin >> X2;
    cout << "enter dX: ";
    cin >> dX;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;
    for (double i = X1; i <= X2; i += dX)
    {
        if (i < 0 && b != 0) {

            if (a == 0 || b == 0 || c == 0) {
                int ac = (int)a;
                int bc = (int)b;
                int cc = (int)c;
                cout << "F(x)= " << -ac * i * i + bc << endl;
            }
            else {
                cout << "F(x)= " << -a * i * i + b << endl;
            }
        }
        else if (i > 0 && b == 0) {
            if (a == 0 || b == 0 || c == 0) {
                int ac = (int)a;
                int bc = (int)b;
                int cc = (int)c;

                if (cc != i) {
                    cout << "F(x)= " << i / (i - cc) + 5.5 << endl;
                }
                else {
                    cout << "error" << endl;
                }
            }
            else {
                if (c != i) {
                    cout << "F(x)= " << i / (i - c) + 5.5 << endl;
                }
                else {
                    cout << "error" << endl;
                }
            }
        }
        else {
            if (a == 0 || b == 0 || c == 0) {
                int ac = (int)a;
                int bc = (int)b;
                int cc = (int)c;
                if (cc != 0) {
                    cout << "F(x)= " << i / -cc << endl;
                }
                else {
                    cout << "error" << endl;
                }
            }
            else {
                
                    if (c != 0) {
                        cout << "F(x)= " << i / -c << endl;
                    }
                    else {
                        cout << "error" << endl;
                    
                }
            }

        }
    }
    cin.get();
    cin.get();
    return 0;
}

