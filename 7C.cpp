#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, r1, r2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    float discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Real roots are " << r1 << " and " << r2;
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots are " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i";
    }

    return 0;
}
