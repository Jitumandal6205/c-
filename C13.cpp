#include <bits/stdc++.h>
using namespace std;

int main() {

  int z;
  int x;
  int c;
  cin >> z;
  cin >> x;
  cin >> c;
  if (c > x or c > z ) {
    cout << "PASS" << endl;
  } 
  else {
    cout << "FAIL" << endl;
  }
  
  cin >> z;
  cin >> x;
  cin >> c;
  if (c > x or c > z ) {
    cout << "PASS";
  } 
  else {
    cout << "FAIL";
  }

  return 0;
}
