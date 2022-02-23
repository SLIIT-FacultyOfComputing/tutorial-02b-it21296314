#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  float cm,inches;

  cout << "Énter a length in cm: ";
  cin >> cm;

  inches = cm / 2.54;

  cout << setiosflags (ios :: fixed) << setprecision (2) <<"Length in inches " << inches;
  return 0;
}
