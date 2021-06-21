//GM 21-06-2021
#include<iostream>
using namespace std;
class Account{
private:
  int AccountNumber,year;
  float balance,amount,interest;
  string HolderName,account_type;
  float rate;
public:
  // Default account creation
  Account(){
  AccountNumber=444222777;
  balance=200;
  HolderName="Golam Muktadir";
  interest=0;
  rate=10; //10% interest rate
  account_type="Savings";
  }
public:
  void AccountCreate(int actype){
  cout<<"Enter Account Number:";
  cin>>AccountNumber;
  cout<<"Enter Name:";
  cin>>HolderName;
    if(actype==1){
      account_type="Savings";
      rate=10; //10% interest rate
      balance=0;
    }

    if(actype==2){
      account_type="Current";
      rate=6; // 6% interest rate
      balance=0;
    }
  Deposit(); //call Deposit
  }

  int AcNumCheck(int acno){
    if(acno==AccountNumber)
      return 1;
    else
      return 0;
  }
  void Deposit(){
  cout<<"Enter Amount that you want to deposit:";
  cin>>amount;
  if(amount>0){
    balance+=amount;
    cout<<amount<<" TK deposit successfully...."<<endl;
  }

  else
    cout<<"Please, Enter a Valid amount of Taka"<<endl;

  }
  void Withdraw(){
  cout<<"Enter Amount that you want to withdraw:";
  cin>>amount;
  if(amount<balance){
    balance-=amount;
    cout<<amount<<" TK withdraw successfully...."<<endl;
  }
  else
    cout<<"Insufficient Balance !"<<endl;

  }
  void Interest(int year){
  cout<<"After Interest:"<<year<<" year(s)"<<endl;
  interest=balance*(rate/100)*year;
  balance=balance+interest;
  }

  void Display(){
  cout<<"=======Your Account Summary======="<<endl;
  cout<<"Bank A/C   :"<<AccountNumber<<"("<<account_type<<"-Interest rate:"<<rate<<"%"<<")"<<endl;
  cout<<"Holder Name:"<<HolderName<<endl;
  cout<<"Balance(tk):"<<balance<<" only"<<endl;
  cout<<"=================================="<<endl;
  }

};

int main()
{
  Account ac;
  //bool confirm;
  int confirm,acno,dw,rate,year,actype;
  char menu;
  cout<<"======Welcome to Islamic Mudaraba Banking System======="<<endl;
  cout<<">>>Have any account?\n1.No\n2.yes"<<endl;
confirm_ac:
  cin>>confirm;
  if(confirm==1)
  {
confirm_actype:
    cout<<"Which type of account you want to create ? \n1.Savings \n2.Current"<<endl;
    cin>>actype;
    if(actype==1)
    {
      ac.AccountCreate(actype);
      ac.Display();
      cout<<"Want to go main menu ? (y/n):";
      cin>>menu;
      if(menu=='y')
        goto acfunction;
    }
    else if(actype==2)
    {
      ac.AccountCreate(actype);
      ac.Display();
      cout<<"Want to go main menu ? (y/n):";
      cin>>menu;
      if(menu=='y')
        goto acfunction;
    }
    else
    {
      cout<<"Enter only menu 1 or 2"<<endl;
      goto confirm_actype;
    }
  }
  else if(confirm==2)
  {
    cout<<"Enter Account Number:";
    cin>>acno;
    if(ac.AcNumCheck(acno)==1)
      {
  acfunction:
        cout<<"Choose option\n==============\n1.Deposit \n2.Withdraw \n3.Balance Check \n4.Interest calculation"<<endl;
        cout<<">";
        cin>>dw;
        switch(dw)
        {
        case 1:
          ac.Deposit();
          ac.Display();
          cout<<"Want to go main menu ? (y/n):";
          cin>>menu;
          if(menu=='y')
            goto acfunction;
          break;
        case 2:
          ac.Withdraw();
          ac.Display();
          cout<<"Want to go main menu ? (y/n):";
          cin>>menu;
          if(menu=='y')
            goto acfunction;
          break;
        case 3:
          ac.Display();
          cout<<"Want to go main menu ? (y/n):";
          cin>>menu;
          if(menu=='y')
            goto acfunction;
          break;
        case 4:
          cout<<"How many Year?:"<<endl;
          cin>>year;
          ac.Interest(year);
          ac.Display();
          goto acfunction;
          break;
        default:
          cout<<"Select Valid menu:";
          goto acfunction;
          break;
        }

      }
    else
      cout<<"Enter a Valid Account Number";

  }
  else
  {
    cout<<"Confirm 1 or 2"<<endl;
    goto confirm_ac;
  }

  return 0;
}
