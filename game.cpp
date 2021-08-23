// Developed by Shubham
#include <iostream>
#include<stdlib.h> //rand,srand
#include<time.h> // time
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;42m"
#define REDB "\e[0;41m"
#define LINE "\e[0;4m"
#define BLUE "\e[0;34m"
using namespace std;

int main() {
    int a,b,bid,bamt=1000; 
   
  cout << "\t\t" << REDB "**************Welcome to Casino**************\n\n" NC;
  
  cout << GRN "Rules Of The Game\n" NC;
  cout << LINE "Rule 1:- if you win in this game your bidding amount will double.\n";
  cout << LINE "Rule 2:- if you lose in this game your bidding amount is deducted from your balance.\n";
  cout << CYN "\n\t\tyour bonus balance is"<< LINE "1000₹\n";
 while(bamt>0){
  cout << BLUE "\n\t\tChoose a number between 1 to 10:->";
  cin >> a;
  cout << BLUE "\n\t\tEnter your bidding amount:->" NC;
  cin >> bid;
  if(bid<=bamt){
  srand (time(NULL)); // initialize random seed 
  b = rand() % 10 + 1;
  cout << "\t\tLucky number was:" << b << endl;
  if(a==b){
      bamt=bamt+(bid*2);
      
      cout << "\n\t\tYou Win" <<"\U0001F911" << endl;
      cout << LINE "\n\t\tYour Current balance is " NC << bamt << endl;
  }
  else{
      bamt=bamt-bid;
      cout << "\n\t\tyou lose" <<"\U0001F61F" << endl;
      cout << LINE "\n\t\tYour Current balance is " NC << bamt << endl;
      
      if(bamt==0){
          cout<< RED "\n\t\tGMAE OVER" NC;
      }
  }
  
  } 
  else {
      cout << "\n\t\tNot enough balance\n";
  }
 }
}
