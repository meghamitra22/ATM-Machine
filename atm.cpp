#include<iostream>
using namespace std;
class ATM{
  private:
    int balance;
  public:
    ATM(int bal){
      balance=bal;
    }
    int getBalance(){
        return balance;
      }
    int withdraw(int amount){
        if(amount>balance){
          return false;
        }
        balance=balance-amount;
        return true;
      }
    void deposit(int amount){
      balance=balance+amount;
    }
};
main(){
  ATM atm(1000);
  int choice;
  char op;
  int amount;
  int success;
  do{
    system("cls");
    cout<<"1.View Balance"<<endl;
    cout<<"2.Cash Withdraw"<<endl;
    cout<<"3.Cash Deposit"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter Your Choice:";
    cin>>choice;
 
    switch(choice){
      case 1:
        cout<<"Your Balance is:"<<atm.getBalance();
        break;
      case 2:
        cout<<"Your available Balance:"<<atm.getBalance()<<endl;
        cout<<"Enter the amount to Withdraw:";
        cin>>amount;
        success=atm.withdraw(amount);
        if(success)
        {
          cout<<"Withdraw Successfull..."<<endl;

        }
        else
        {
          cout<<"Insufficient Balance..."<<endl;
        }
        break;
      case 3:
        cout<<"Enter the amount to Deposit:";
        cin>>amount;
        atm.deposit(amount);
        cout<<"Deposit Successfull..."<<endl;
        break;
      case 4:
        cout<<"Thanks for using ATM";
        break;
      default:
        cout<<"Invalid Choice";
        break;
      

  }
  cout<<"\nDo you want to try Another Transaction[Yes/No]";
cin>>op;

} while(op=='y'||op=='Y');



}
  