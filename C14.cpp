#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        
        if (x + 2 * y == 0)
        {
            cout << "Division by zero is not allowed!" << endl;
        }
        else 
        {
            cout << (y / x) << endl;
        }
    }
    
    return 0;
}
