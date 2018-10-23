#include "exc_mean.h"
#include <cmath>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

int main(int argc, const char * argv[]) {
    double a, b,z;
    cout << "Please enter two doubles for calculation.\n";
    while(cin >> a >> b)
    {
        try {
            z = hmean(a, b);
            cout << "Harmonic mean of a and b is "
            << z << endl;
            z = gmean(a,b);
            cout << "The geometric mean of a and b is "
            << z << endl;
        }
        catch(bad_mean & bm)
        {
            cout << bm.what() << endl;
            bm.report();
            cout << "Please enter another two. q to quit.\n";
        }
    }
    cout << "Bye.\n";
    return 0;
}
double hmean(double a, double b)
{
    if(a == -b)
        throw bad_hmean(a,b);
    return 2 * a * b/(a + b);
}
double gmean(double a, double b)
{
    if( a < 0 || b < 0)
        throw bad_gmean(a,b);
    return sqrt(a*b);
}
