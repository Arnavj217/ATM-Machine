#include<iostream>
using namespace std;
int main()
{
    int bal=100000,bank,button,wd,dp;
    cout<<"Choose your Desried Bank";
    cout<<"\n1)SBI Bank";
    cout<<"\n2)Axis Bank";
    cout<<"\n3)HDFC Bank";
    cout<<"\nPress number in front of bank you want to choose = ";
    cin>>bank;
    if(bank==1)
    {
    cout<<"\n\t **** Welcome to SBI Bank ATM MACHINE ****";
    cout<<"\n";
    }
    else if(bank==2)
    {
    cout<<"\n\t **** Welcome to Axis Bank ATM MACHINE ****";
    cout<<"\n";
    }
    else if(bank==3)
    {
    cout<<"\n\t **** Welcome to HDFC Bank ATM MACHINE ****";
    cout<<"\n";
    }
    else
    {
       cout<<"\n\nChoose the correct option from the given list...TRY AGAIN";
    }
    cout<<"\nChoose your Desired option";
    cout<<"\n1)Check Balance";
    cout<<"\n2)Withdrwal Money";
    cout<<"\n3)Deposit Money";
    cout<<"\nPress number in front of option you want to choose = ";
    cin>>button;
    if(button==1)
    {
        cout<<"\n\nChecking Balance...";
        cout<<"\nCurrent Balance in your account is = "<<bal<<" RS";
        cout<<"\n\n\t**** THANK YOU FOR VISTING ****";
    }
    else if(button==2)
    {
        cout<<"\n\nEnter the amount you want to withdraw = ";
        cin>>wd;
        bal=bal-wd;
        cout<<"\nWithdrawing Money...";
        cout<<"\n";
        cout<<wd<<"RS amount has been successfully withdrawled";
        cout<<"\n\nNow,the current balance in your account is = "<<bal<<" RS";
        cout<<"\n\n\t**** THANK YOU FOR VISTING ****";
    }
    else if(button==3)
    {
        cout<<"\n\nEnter the amount you want to deposit = ";
        cin>>dp;
        bal=bal+dp;
        cout<<"\nDepositing Money...";
        cout<<"\n";
        cout<<dp<<"RS amount has been successfully deposited";
        cout<<"\n\nNow,the current balance in your account is = "<<bal<<" RS";
        cout<<"\n\n\t**** THANK YOU FOR VISTING ****";
    }
    else
    {
        cout<<"\n\nChoose the correct option from the given list...TRY AGAIN";
    }
    return 0;
}
