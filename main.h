#include<bits/stdc++.h>
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

    void create_ac (string name,string  address,char *mobile,char *password) // A/C create function
    {
        this -> name=name ;
        this  -> address=address;
       strcpy (mobile_no,mobile) ;
        strcpy(pass,password);
        balance=500.000;


    }

    void set_ac (int ac) { ac_no=ac;} // random number string generate algorithm

    void showinfo () // A/C info function
    {
        cout<<endl<<endl;
        cout<< "\t ********ACCOUNT INFORMATION********"<<endl<<endl;
        cout << "\t\t***NAME    : "<<name<<endl ;
        cout<< "\t\t***ADDRESS : "<<address<<endl;
        cout<< "\t\t***A/C No  : "<<mobile_no<<endl;
      cout<<"\t\t***Balance : "<<balance<<"/="<<endl;
    }

    double deposit_balance(double taka) //Deposit function

    {
        if(taka>=1000)
        {
            balance = balance+taka;
            cout<< "\n\n ***** Deposit Successfully Complet ****** ";
            cout<< "\n\n *** Current Balance is "<<balance<< " /= ***"<<endl<<endl;

        }

        else
        {
              cout<< "\n\n***** Amount must be grater than 1000/= *****"<<endl;
            cout<< "\n\n***** Please try  again *****"<<endl << endl ;
        }

    }




    double withdraw_balance(double taka) // withdraw function
    {
        if (taka<=balance)
        {

        if(1000<=taka)
        {

             cout<<balance;
            balance = balance - taka;
            cout<< "\n\n****** Withdraw Successfully Complet ******";
            cout<< "\n\n*** Current Balance is "<<balance<< " /=  ***"<<endl<<endl;

        }

        else
        {
             cout<< "\n\n***** Amount must be grater than 1000/= *****"<<endl;
            cout<< "\n\n***** Please try  again *****"<<endl << endl ;
        }
        }

        else
        {
            cout<< "\n\n***** Insufficient fand*****";

        }

    }


    double add_balance(double taka)   // tranfer function   ( receiver )
    {
        if (1000<=taka)
        balance= balance + taka;

    }

 double sub_balance(double taka)  // tranfer function   ( sender  )
        {
            if(1000<=taka)
                {
                    balance=balance-taka;
                    cout<< "\n\n ***** Balance Transfer SSuccessfully Complet ******"<<endl<<endl;
                    cout<< "\n\n*** Current Balance is "<<balance<< " /=  ***"<<endl<<endl;

                }

        }


}; // class close
