#include "main.h"
vector<double> quadformula(int a, int b, int c)
{
    vector<double> equations;
    double sqrtpart = sqrtportion(a , b , c );
    double plus = plusEquation(a,b, sqrtpart);
    double minus = minusEquation(a,b, sqrtpart);
    equations.push_back(plus);
    equations.push_back(minus);
    return equations;
}

double plusEquation(int a , int b , double sqrtpt)
{
  return (-b + sqrtpt) / (2*a);
}
double minusEquation(int a , int b , double sqrtpt)
{
  return (-b - sqrtpt) / (2*a);
}

double sqrtportion(int a, int b, int c)
{
    if ((square(b) - 4*a*c) < 0)
    {
        cout << "negative value for  b^2 - 4ac. We have:  " << (square(b) - 4*a*c) << endl;
    }
    return sqrt((square(b) - 4*a*c));
}

double square(int value)
{
  return value * value;
}

