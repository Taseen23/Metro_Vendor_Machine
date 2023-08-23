#include <iostream> 
#include <iostream> 
#include <vector> 
#include <sstream> 
using namespace std; 
int main() 
{ 
 int ticketPrice = 60; 
 int totalMoney = 0; 
 int inputMoney; 
 vector< int >arr; 
 string input; 
 cout<< "Please insert 10, 20, 50, or 100 BDT "<<endl; 
jump: 
 cout<< "Insert Note: "; 
 getline(cin, input); 
 istringstream is(input); 
 int num; 
 while(is>>inputMoney) 
 { 
 arr.push_back(inputMoney); 
 if (inputMoney != 10 && inputMoney != 20 && inputMoney != 50 && inputMoney != 
100) 
 { 
 cout << "Invalid input money. Please insert 10, 20, 50, or 100 BDT." << endl; 
 } 
 else 
 { 
 totalMoney = totalMoney + inputMoney; 
 } 
 } 
 cout << "Total money: " << totalMoney << " BDT" << endl; 
 if (totalMoney > ticketPrice) 
 { 
 int change = totalMoney - ticketPrice; 
 cout << "Ticket purchased." <<endl <<"Your change is " << change << " BDT." << endl; 
 } 
 else if (totalMoney < ticketPrice) 
 { 
 cout << "Insert More Money." << endl; 
 goto jump; 
 } 
 else 
 { 
 cout << "Ticket purchased." << endl; 
 } 
 return 0; 
} 