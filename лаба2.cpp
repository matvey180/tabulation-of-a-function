#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double A; // declaration of variable A - beginning of the segment
    double B; // declaration of variable B - end of the segment
    cout << "Enter the beginning of the segment: "; // echo-print
    cin >> A; // initialization, input value for variable A
    cout << "Enter the end of the segment: "; // echo-print
    cin >> B; // initialization, input value for variable B
    if (A <= B) { // checking segment validity
        if (A == B) { // checking segment validity (point segment)
            cout << "=================================================================================================" << endl; // table header (pseudo-graphics)
            cout << "|  i  |            x_i            |            F(x_i)            |            G(x_i)            |" << endl; // table header (pseudo-graphics)
            cout << "=================================================================================================" << endl; // table header (pseudo-graphics)

            cout << fixed << setprecision(6); // setting output precision for fractional numbers to six digits

            cout << "| " << setw(3) << '1' << " | " << setw(25) << A << " | " << setw(28) << sin(A) + cos(A) - 1 << " | " << setw(28)
                << ((A + 5) * (A + 5) * (A + 5)) / (1 + sin(A) * sin(A)) << " | " << endl; // output results to screen (pseudo-graphics)
            return 0;
        }

        double N; // declaration of variable N - number of intervals
        cout << "Enter number of steps: "; // echo-print
        cin >> N; // initialization of variable N
        if (floor(N) == N) { // checking for integer number of steps
            if (N <= 0) { // checking number of steps
                cout << "Error! Number of steps must be more than 0!"; // error message output
                return 0;
            }

            //cout << "=================================================================================================" << endl; // table header (pseudo-graphics)
            //cout << "|  i  |            x_i            |            F(x_i)            |            G(x_i)            |" << endl; // table header (pseudo-graphics)
            //cout << "=================================================================================================" << endl; // table header (pseudo-graphics)

            cout << fixed << setprecision(6); // setting output precision for fractional numbers to six digits


            double h; // declaration of variable h - step size for argument x_i increment
            h = (B - A) / N; // initialization of variable h
            double x; // declaration of variable x - current calculated value of argument x
            double F_x; // declaration of variable F_x - function F(x)
            double G_x; // declaration of variable G_x - function G(x)
            double denominator; // declaration of variable denominator - denominator of function G(x)
            double numerator; // declaration of variable numerator - numerator of function F(x)

            for (int i = 0; i <= N; i++) { // loop for calculating all function values in segment [A; B]
                x = A + i * h; // initialization of variable x
                F_x = sin(x) + cos(x) - 1; // initialization of variable F_x
                denominator = 1 + sin(x) * sin(x); // initialization of variable denominator
                numerator = (x + 5) * (x + 5) * (x + 5); // initialization of variable numerator
                G_x = numerator / denominator; // initialization of variable G_x

                cout <<  setw(3) << i <<  setw(25) << x  << setw(28) << F_x << setw(28) << G_x  << endl; // output results to screen (pseudo-graphics)
            }
        }
        else {
            cout << "Error! Number of steps must be integer."; // error message output
        }
    }
    else {
        cout << "Error! Invalid segment is incorrect!"; // error message output
    }

    return 0;
}
