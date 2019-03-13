#include <iostream>;
#include <conio.h>; 

using namespace std;
 
int main()
 
{
   float wage = 0;
   float hoursWorked = 0;
   float totalPay = 0;
   float afterTaxes = 0;
   float clothingCost = 0;
   float schoolSuppliesCost = 0;
   float savingsBonds = 0;
   float remainingMoney = 0;
   float parentsBonds = 0;
   cout << "Enter your hourly wage:";
   cin >> wage;
   cout << "Enter hours worked per week:";
   cin >> hoursWorked;
   totalPay = hoursWorked * wage * 5;
   cout << " " << endl;

   cout << "After your Summer Job, your total pay before taxes is $" << totalPay;
   afterTaxes = totalPay * .86;
   cout << " " << endl;

   cout << "After paying taxes, your total wage is $" << afterTaxes;
   clothingCost = afterTaxes * .1;
   cout << " " << endl;
   cout << " " << endl;

   cout << "BREAKDOWN OF EXPENSES" << endl;
   cout << " " << endl;

   cout << "Clothing and Accessories: " << clothingCost << "$";
   schoolSuppliesCost = afterTaxes * .01;
   cout << " " << endl;

   cout << "School Supplies: " << schoolSuppliesCost << "$";
   remainingMoney = afterTaxes - clothingCost - schoolSuppliesCost;
   savingsBonds = remainingMoney * .25;
   cout << " " << endl;

   cout << "Saving Bonds: " << savingsBonds << "$";
   parentsBonds = savingsBonds * .5;
   cout << " " << endl;
   cout << "Additional (c/o parents) For Saving Bonds: " << parentsBonds << "$";

   _getch();
   return 0;
}