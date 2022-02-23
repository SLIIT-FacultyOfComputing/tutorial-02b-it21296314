#include <iostream>

using namespace std;
int main()
{
  double salary, netSalary;
  int eType,otHrs,otRate;

  cout << "Employee type:" ;
  cin >> eType;

  cout << "Enter salary: ";
  cin >> salary;

  cout <<"Enter oT hours: ";
  cin >> otHrs;

  switch ( eType )
    {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }

   netSalary = salary + (otHrs* otRate);
   cout << "Net salary is " << netSalary;
    
   return 0;
}

