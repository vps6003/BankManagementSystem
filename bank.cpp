#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<fstream>

using namespace std;
#define int long long



class bankVPS
{
    char y;
    double balance;
    int acc_number;
    string un,name,pin,pw,balc,bals,acc,number,add;
  public:
    void open_account();

    void deposite_money();
    void withdraw_money();
    void Display_account();
    bool login();
    bool file_exists();
    bool file_exists1(string s);

};
bool bankVPS::file_exists()
{

    ifstream ifile;
    ifile.open("dummyfile.txt");
    if(ifile)
    {
        return true;
    }
    else
        return false;

}
bool bankVPS::file_exists1(string s)
{

    ifstream ifile;
    ifile.open(s +".txt");
    if(ifile)
    {
        return true;
    }
    else
        return false;

}

bool  bankVPS:: login()
{
    system("CLS");
    cout<<"\nEnter your account number :";
    cin>>acc_number;

     int i=3,n;
    string x;
    n=acc_number;
    acc="0000";
   while(i>=0)
        {


          if(i==3)
          {


               i=n%10;
              x=to_string(i);
              acc[3]=x[0];

              n=n/10;
              i=2;

          }
        else if(i==2)
          {


              i=n%10;
              x=to_string(i);
              acc[2]=x[0];
              n=n/10;
              i=1;

          }
         else if(i==1)
          {


               i=n%10;
              x=to_string(i);
              acc[1]=x[0];
              n=n/10;
              i=0;

          }
         else if(i==0)
          {


               i=n%10;
              x=to_string(i);
              acc[0]=x[0];
              n=n/10;
              i=-1;

          }

        }



    if(file_exists1(acc))
    {

    ifstream read(acc +".txt");
    getline(read ,un);
    getline(read,pw);
     read.close();


    cout<<"\n Enter YOUR 4-Digit PIN : ";
    cin>>pin;

    if(pin==pw)
    {

     return true;
    }
    else
    {

        return false;
    }
    }
    else
    {

        cout<<"\nAccount doesn't exists";
    }


}



void bankVPS :: open_account()

 /*char  y;
    double balance;
    int acc_number;
    string un,name,pin,pw,balc,bals,acc,number,add;*/
{
    cout<<"Enter YOUR FULL NAME : ";
    cin.ignore();
    cin>>name;

    cout<<"Enter YOUR ADDRESS : ";
    cin.ignore();
    cin>>add;

    cout<< "\nWhat type of Account YOU want to OPEN :"
         <<"Saving(s)  or Current (c) ::";
    cin>>y;

    cout<< "\nEnter amount for deposit :->";
    cin>>balance;

    cout<<"\n Enter a 4-digit pin to secure your account(----)";
    cin>>pin;

    if(file_exists())
    {
        int n=0,i=3;
        string x;
        ifstream read("dummyfile.txt");
        getline(read,acc);

        stringstream stream(acc);
        stream>>acc_number;
        acc_number++;

        n=acc_number;

         if(n<10000)
    {


        while(i>=0)
        {


          if(i==3)
          {


               i=n%10;
              x=to_string(i);
              acc[3]=x[0];

              n=n/10;
              i=2;

          }
        else if(i==2)
          {


              i=n%10;
              x=to_string(i);
              acc[2]=x[0];
              n=n/10;
              i=1;

          }
         else if(i==1)
          {


               i=n%10;
              x=to_string(i);
              acc[1]=x[0];
              n=n/10;
              i=0;

          }
         else if(i==0)
          {


               i=n%10;
              x=to_string(i);
              acc[0]=x[0];
              n=n/10;
              i=-1;

          }

        }






        balc=to_string(balance);

        ofstream file;
        file.open("dummyfile.txt");
        file<<acc;
        file.close();

           file.open(acc +".txt");
           file << acc << endl << pin << endl << name << endl << add << endl << balc ;
            file.close();



    }
    }
    else{
        number="0001";
        ofstream file;
        file.open("dummyfile.txt");
        file<<number;
        file.close();
        file.open(number +".txt");
        file << number << endl << pin << endl << name << endl << add << endl << balance;
        file.close();

    }

    cout<<"Your account is created ... \n"
         <<"Your Account name : "<<name
         <<"\nYour Account Number : "<< number
         <<"\nYour 4-Digit PIN  : "<< pin
         <<"\nYour Address : "<< add
         <<"\nYour Balance amount :"<<balance;



}


void bankVPS :: deposite_money()
{
/*char  y;
    double balance;
    int acc_number;
    string un,name,pin,pw,balc,bals,acc,number,add;
    file << number << endl << pin << endl << name << endl << add << endl << balance;
        */

    int i=3,n;
    string x;
   while(i>=0)
        {


          if(i==3)
          {


               i=n%10;
              x=to_string(i);
              acc[3]=x[0];

              n=n/10;
              i=2;

          }
        else if(i==2)
          {


              i=n%10;
              x=to_string(i);
              acc[2]=x[0];
              n=n/10;
              i=1;

          }
         else if(i==1)
          {


               i=n%10;
              x=to_string(i);
              acc[1]=x[0];
              n=n/10;
              i=0;

          }
         else if(i==0)
          {


               i=n%10;
              x=to_string(i);
              acc[0]=x[0];
              n=n/10;
              i=-1;

          }

        }    ifstream read(acc +".txt");
    getline(read,number);
    getline(read,pw);
    getline(read,name);
    getline(read,add);
    getline(read,balc);

    balance=0;
    stringstream stream(balc);
    stream >> balance;

  double a;
  cout<<"\nEnter how  much you want to deposit:";
  cin>>a;
  balance+=a;
  cout<<"\ntotal amount you deposit : \t"<<balance;
  balc=to_string(balance);
  ofstream file;
  file.open(number +".txt");
  file << number << endl << pin << endl << name << endl << add << endl << balance;
    file.close();

}


void bankVPS:: Display_account()
{
/*char  y;
    double balance;
    int acc_number;
    string un,name,pin,pw,balc,bals,acc,number,add;*/
       system("CLS");

   int i=3,n;
    string x;
    n=acc_number;
   while(i>=0)
        {


          if(i==3)
          {


               i=n%10;
              x=to_string(i);
              acc[3]=x[0];

              n=n/10;
              i=2;

          }
        else if(i==2)
          {


              i=n%10;
              x=to_string(i);
              acc[2]=x[0];
              n=n/10;
              i=1;

          }
         else if(i==1)
          {


               i=n%10;
              x=to_string(i);
              acc[1]=x[0];
              n=n/10;
              i=0;

          }
         else if(i==0)
          {


               i=n%10;
              x=to_string(i);
              acc[0]=x[0];
              n=n/10;
              i=-1;

          }

        }

     cout<<"\t\t\t************  "<<acc<<"**************"<<endl;
    ifstream read(acc +".txt");
    getline(read,number);
    getline(read,pw);
    getline(read,name);
    getline(read,add);
    getline(read,balc);
     read.close();
    stringstream stream(balc);
    stream>>balance;


    cout<<"\n Your account name :"<<name
        <<"\nYour account number :" << number;
    cout<<"\nAmount deposited  : \t"<<balance;


   }


void bankVPS :: withdraw_money()
{
/*char y;
    double balance;
    int acc_number;
    string un,name,pin,pw,balc,bals,acc,number,add;*/
    int i=3,n;
    string x;
   while(i>=0)
        {


          if(i==3)
          {


               i=n%10;
              x=to_string(i);
              acc[3]=x[0];

              n=n/10;
              i=2;

          }
        else if(i==2)
          {


              i=n%10;
              x=to_string(i);
              acc[2]=x[0];
              n=n/10;
              i=1;

          }
         else if(i==1)
          {


               i=n%10;
              x=to_string(i);
              acc[1]=x[0];
              n=n/10;
              i=0;

          }
         else if(i==0)
          {


               i=n%10;
              x=to_string(i);
              acc[0]=x[0];
              n=n/10;
              i=-1;

          }

        }
    ifstream read(acc +".txt");
    getline(read,number);
    getline(read,pw);
    getline(read,name);
    getline(read,add);
    getline(read,balc);

    balance=0;
    stringstream stream(balc);
    stream >> balance;

  double amount;
  cout<<"\n withdraw :";
  cout<<"\n Enter amount to withdraw :"; cin>>amount;
  balance-=amount;
  cout<<"\nNow total amount left is : "<<balance;
  balc=to_string(balance);
  ofstream file;
  file.open(number +".txt");
  file << number << endl << pin << endl << name << endl << add << endl << balance;
    file.close();

}



int32_t main()
   {

/*char  y;
    double balance;
    int acc_number;
    string un,name,pin,pw,balc,bals,acc,number,add;*/

        char ch;
    bankVPS obj;
     do{
     cout<<"1.Open Account(CREATE) : "<<endl
     <<"2.Login Into Account :"<<endl
     <<"3.exit"
     <<"\n\nEnter your choice :";

     cin>>ch;
     switch (ch)
     {

         case '1': cout<<"1) open account\n";
                   obj.open_account();
                   break;
              case '3': exit(1);
                        break;
              case '2' : if(!(obj.login()))
                           {
                               exit(0);
                           }

                           else{

                               cout<<"\n1.Deposit Money :";
                               cout<<"\n2.Withdraw MOney :";
                               cout<<"\n3.Display Account(check balance) :"
                                    <<"\n4.Exit";
                               cin>>ch;
                               switch(ch)
                               {

                               case '1': obj.deposite_money();
                                           break;
                               case '2': obj.withdraw_money();
                                         break;
                               case '3': obj.Display_account();
                                          break;
                               case '4' : exit(2);
                                          break;
                                default : cout<<"Wrong choice  login again and try again...";
                                           exit(3);
                               }
                           }
                           break;


     default:cout<<"\nWrong Choice Entered(try again):\n";

      } cout<<"\nDo you want to select next option then press (Y)and to exit press (N) :\n";cin>>ch;
              if(toupper(ch)=='N')
              exit(0);



     }while(toupper(ch)=='Y');

       system("CLS");
     getch();
   }
