#include<iostream.h>
#include<conio.h>

class Bank
{
private:
char name[20];
char account[15];
char account_type[15];
int Creat,Deposit,Withdraw;

public:
Bank()
{
name[20]=' ';
account[15]=' ';
account_type[15]=' ';
Creat=1000;
}

void menu();
void create();
void depos();
void check();
void wdraw();
void display();
};

void Bank::menu()
{
int choices;
cout<<"****************************************"<<endl;
cout<<"Bank Management System:"<<endl;
cout<<"Choose From The Menu Below:"<<endl;
cout<<"1. Creat An Account:"<<endl;
cout<<"2. Deposite Balance:"<<endl;
cout<<"3. Check Balance:"<<endl;
cout<<"4. Withdraw Balance:"<<endl;
cout<<"5. Account Detail:"<<endl;
cout<<"6. Extit"<<endl;
cout<<"****************************************"<<endl;
cin>>choices;


if(choices == 1)
{
create();menu();
}
if(choices == 2)
{
depos();menu();
}
if(choices == 3)
{
check();menu();
}
if(choices == 4)
{
wdraw();menu();
}
if(choices == 5)
{
display();menu();
}
}

void Bank::create()
{
cout<<"Enter Name:";
cin>>name;
cout<<"Enter Account number:";
cin>>account;
cout<<"Enter Account Type:";
cin>>account_type;
}

void Bank::depos()
{
cout<<"Enter Deposit Amount:";
cin>>Deposit;
}

void Bank::check()
{
Creat=Creat+Deposit;
cout<<"Total Avilable Amount:"<<Creat<<endl<<endl;
}
void Bank::wdraw()
{
cout<<"Enter Withdraw Amount:";
cin>>Withdraw;
}
void Bank::display()
{
cout<<"Transaction Detail"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Account Number:"<<account<<endl;
cout<<"Total Deposit:"<<Deposit<<endl;
cout<<"Total Withdraw:"<<Withdraw<<endl;
cout<<"Available Now Amount:"<<Creat-Withdraw;
}

int main()
{
Bank B;
B.menu();
return 0;
}


