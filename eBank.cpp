#include<bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std ;

class Cls
{
private :
    string name  ;
        string address;
                int ac_no ;


public :
   char mobile_no[11];
    char pass[4] ;
     double balance ;
    Cls ()
    {
        name  = " ";
        address= " ";
        balance =00.00 ;
    }

    void create_ac (string name,string  address,char *mobile,char *password)
    {
        this -> name=name ;
        this  -> address=address;
       strcpy (mobile_no,mobile) ;
        strcpy(pass,password);
        balance=500.000;
        cout<<"Balance = "<<balance<<endl;

    }

    void set_ac (int ac) { ac_no=ac;} // random number string generate algorithm

    void showinfo ()
    {
        cout<<endl<<endl;
        cout << "NAME : "<<name<<endl ;
        cout<< "ADDRESS :"<<address<<endl;
      cout<<"Balance :"<<balance<<endl;
    }

    double deposit_balance(double taka)

    {
        if(taka>=1000)
        {
             cout<<balance;
            balance = balance+taka;
            cout<< "\n\n ***** Deposit Successfully Complet ****** ";
            cout<< "\n\n *** Current Balance is "<<balance<< " /= ***"<<endl<<endl;

        }

        else
        {
               cout<< "Amount must be grater than 1000/="<<endl;
        cout<< "Please try  again "<<endl << endl ;
        }

    }




    double withdraw_balance(double taka)
    {
        if(500<=taka)
        {

             cout<<balance;
            balance = balance - taka;
            cout<< "\n\n****** Withdraw Successfully Complet ******";
            cout<< "\n\n*** Current Balance is "<<balance<< " /=  ***"<<endl<<endl;

        }

        else
        {
             cout<< "Amount must be grater than 500/="<<endl;
             cout<<balance;
        cout<< "Please try  again "<<endl << endl ;
        }

    }




};

void countdown () ; //countdown function





static const char alphanum[] =  // random string variable
"0123456789";

int stringLength = sizeof(alphanum) - 1;

char genRandom()  // Random string generator function.
{

    return alphanum[rand() % stringLength];
}
















int main ()
{
    static int ac=1;
    static int t=1;

    cout<<"\n\n\n\t  BANK";
	cout<<"\n\n\tMANAGEMENT";
	cout<<"\n\n\t  SYSTEM";
	cout<<"\n\n\n\nCREATED BY : | TROJAN HORSE © 2017 |";
	cout<<endl<<endl<<endl<<endl ;

    Cls obj[10]; //object created


 while(true)
 {

    cout<<endl<<endl<<endl ;
    cout<< "\t   >||MAIN MENU ||<"<<endl<<endl<<endl;
    cout<< "\t1.  Create Account "<<endl;
    cout<< "\t2.  Login Account "<<endl;
    cout<< "\t3.  HELP "<<endl;
    cout<< "\t4   EXIT "<<endl<<endl<<endl<<endl;

    error : // controll for unvalid input

    int menu;
    bool cond;
   do  // bad input controll
   {
         cout<<">> PLEASE SELECT AN OPTION : ";
          cin >> menu;
          cond = cin.fail();
          cin.clear();
          cin.ignore(INT_MAX, '\n');

   }while(cond);   // bad input controll





    //for  create account data ;
    string name , address;
    char  phn,mobile_no[11],password[4],x ;
    double taka;

    switch (menu)
    {
        case 1 :

            {
                cout << "\n\n>> Fill up the following information  carefully <<"<<endl<<endl;
                cout<< "NAME : ";
                cin>>name;
                cout<<endl;
                cout<< "ADDRESS: ";
                cin>>address;
                cout<<endl;
              cout<< "MOBILE (11 digit) : ";
                cin>>mobile_no;
                cout<<endl;
                cout<< "PIN (4 digit) : ";
                cin>>password;
              /*  cout<< "Your A/C No : ";
                    srand(time(0));
                    for(int z=0; z < 10; z++)
                    {
                        mobile_no[z] = genRandom();
                    }
                    mobile_no[10]='\0';
                      for(int k=0;k<= 10; k++)
                        cout<<mobile_no[k]<< "  "; */


                cout<<endl;




                obj[ac].create_ac(name,address,mobile_no,password);
                cout<< "AC NO "<<ac<<" created "<<endl<<endl;
                ac++;
                cout<<ac;
            }
            break ;
        case 2 :

            {
                cout<<endl<<endl<<endl;
                 cout<< "\t >|| Login Menu ||< "<<endl;
                int flag = 0;
                char phn[11] , pass[4]  ;

                cout<< "\n \n Enter Phone Number : ";
                cin>>phn;
                cout<< "\n \n Enter PIN : ";
                cin>>pass;

             for(t=1;t <10-1 ; t++)
               {
                   if((strcmp(obj[t].mobile_no,phn)==0) && (strcmp(obj[t].pass,pass)==0))
                   {       flag=1;
                        cout<< "\n \n \t *** Login Successfully ***"<<endl<<endl;
                        cout<< "\t1.  Deposit Balance"<<endl;
                        cout<< "\t2.  Withdraw Balance"<<endl;
                        cout<< "\t3.  Account Info "<<endl;
                        cout<< "\t4.  Transfer Balance (UP COMMING)"<<endl<<endl ;
                        cout<< "\    *************************************  "<<endl;

                        cout<<endl<<endl;


                        int log;
                        bool cond;
                        do  // bad input controll
                                {
                                        cout<<">> PLEASE SELECT AN OPTION : ";
                                        cin >> log;
                                        cond = cin.fail();
                                        cin.clear();
                                        cin.ignore(INT_MAX, '\n');

                                }while(cond);   // bad input controll


                        switch(log)
                        {
                        case 1 :
                            {
                                double taka;
                                cout<< "\n\n\t        >||Deposit Menu || "<<endl<<endl<<endl;
                                cout<<"\t>|| Enter Amount (>1000): ";
                                cin>>taka;
                               countdown ();
                                obj[t].deposit_balance(taka);


                            }
                            break;
                        case 2:
                            {
                                double taka;
                                cout<< "\n\n\t        >|| Withdraw Menu || "<<endl<<endl<<endl;
                                cout<<"\t>|| Enter Amount (>500): ";
                                cin>>taka;
                                 countdown ();
                                obj[t].withdraw_balance(taka);

                            }
                            break;
                        case 3:
                            {
                                obj[t].showinfo ();


                            }
                            break;
                        case 4 :
                            {
                                cout<< "UPDATING  THIS MENU "<<endl;
                            }
                            break;
                        default :
                            {
                                cout<< "\n\n\n\t *** Invalid Input ***"<<endl;
                            cout<< "\t  Try Againg"<<endl;

                            }

                        }
                    break ;
                   }
               }
            if (flag==0)
                   cout << "\n \n *** Please Enter Correct Phone Number or PIN *** "<<endl;
            }
            break;



        case 3 : cout << "\n \n \n  \t >> Please call 4567 for help \n\n"<<endl ;
            break ;



        case 4:
        {
             cout<< "\n\n\n \t  *** Thanks for using :)  ***\n\n\n";
             return 0;
        }
        break;



        default :
            {
                      cout << "Error input !!! Please select a valid option: "<<endl;

           goto error ;

            }


    };
 }
return 0;

}

void countdown ()
{
	 int m, s,h;

	// cin >> s;
  s=10;
	 cout << " A COUNTDOWN TIMER" << endl;
	 cout << " secs : " << s << endl;
			for (int sec = s; sec >= 0; sec--)
			{
				if ( sec == 0 )
					s = 59;
				Sleep(1000);
				system("cls");
				cout<< " Processing  in "  <<sec<<" second(s)  Please Wait............ "  << endl;

			}
	Sleep(1000);

}
