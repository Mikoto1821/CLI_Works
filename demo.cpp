#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string acc, pass;
    float bal = 10000;
    float wdrw, depo;
    float newBalance;

   cout<< "----=== BANK OF INITIATIVE CORP. ===----";
   
   cout<<"Account Name: ";
   getline(cin, acc);

   cout<<"Password: ";
   getline(cin, pass);

   cout<<"Your balance: ";
   cout << "PHP: " << bal << endl;

   cout << "---deposit---";
   cin >> depo;

   cout << "---withdraw---";
   cin >> wdrw;

   newBalance = bal + depo - wdrw;

   cout << "--==TRANSACTION==--";

   cout <<"Account name: " << acc << endl;
   cout << "Password: " << pass << endl;
   cout << "deposited: " << depo << endl;
   cout << "withdrawn: " << wdrw << endl;
   cout << "your new balance is: " << newBalance << endl;
  
   return 0;

}

