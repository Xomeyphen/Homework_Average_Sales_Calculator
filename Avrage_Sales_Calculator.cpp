/*
Program name : N/A
Programmer : N/A

Date : 10 / 1 / 2023

Version : 1.4

Des: Sales calculator that has user input and error checks is able to display 
 -total number earned, total amout of transactions, and average cost
 -is able to exit using keywords
 -able to make a mistake and will recorver your last good inputs.
*/
#include <iostream>

using namespace std;

int main() {
  double salesNum = 0, enteredSales, avgSale = 0;
  int ammoutOfSales;
  const int exitNum1 = -1, exitNum2 = -9999;


  cout << "Please input a sale and ill let you know the average.\n";
  cout << "At any point if you enter '" << exitNum1 << "' or '" << exitNum2 << "' the program will exit.\n\n";
  cout << "Please enter sale ammout: ";
  cin >> enteredSales;


  while (cin.fail()) {// fail check, can be made into fuction.
    cin.clear();
    cin.ignore();
    cout << "Please enter a real number\n-->";
    cin >> enteredSales;
    continue;
  }
  if (enteredSales == exitNum1 || enteredSales == exitNum2) {// exit
    return 0;
  }


  // calculations stuff
  salesNum += enteredSales;
  ammoutOfSales = 1;
  cout << "Enter at least one more number before I can give an average\n";


  while (true) {// now we can start averaging 
    cout << "\nPlease enter sale ammout: ";
    cin >> enteredSales;


    while (cin.fail()) {// fail check again
      cin.clear();
      cin.ignore();
      cout << "Please enter a real number\n-->";
      cin >> enteredSales;
      continue;
    }
    if (enteredSales == exitNum1 || enteredSales == exitNum2) {// exit
      return 0;
    }

    // calculations stuff
    salesNum += enteredSales;
    ammoutOfSales++;
    avgSale = salesNum / ammoutOfSales;

    // outputs
    cout << "You hae a total of: " << salesNum << endl;
    cout << "Ammout of Sales: " << ammoutOfSales << endl;
    cout << "Avrage sales cost: " << avgSale << endl;
    continue;
  }


  return 0;
}