#include <iostream>

using namespace std;

int main()
{
cout << "Hello There!\nPlease Sign In with your name to Continue.\nName\n"  ;

string name;


cin >>name;
cout << "Please confirm your name \n";

string cname;

cin >>cname;


if(name==cname)
{




    cout <<"Here's Our Menu. Please select the items you wanna have.\n To order you need to type the correct serial Number. \n";

cout <<"Beverages                                                         Cost(Rs.) \n1.Oreo Shake                                                          50\n2.Strawberry Shake                                                    70\n";

int Oreo_Shake,Strawberry_Shake;

cin >>Oreo_Shake;

int NOS,NSS;

cout << "Enter the NO.of items you want to add of "<<Oreo_Shake<<endl;

cin >> NOS;

cout<<"Wanna add another item? Press 1 for Yes And 2 For No.";


int k;
cin >> k;
if (k==1)

cout <<"Please type the serial number of the item you want";
cin >> Strawberry_Shake;

cout << "Enter the amount that you wanna enter"<<Strawberry_Shake<<endl;
if (Strawberry_Shake==Oreo_Shake==1)


cin >> NSS;

 cout << "Total amount is "<<(NOS+NSS)*50<<endl;

 if (Strawberry_Shake==Oreo_Shake==2)

cout <<"Total amount is "<<(NOS+NSS)*70<<endl;

if (Strawberry_Shake!=Oreo_Shake)

    cout <<" Total amount is "<<NOS*50+NSS*70<<endl;

    cout <<"Please Confirm Your Order-\n";

     cout <<NOS <<"Oreo Shake\n";

    cout <<NSS <<"Strawberry Shake";








    cout <<"Please Confirm Your Order-\n";
if (Oreo_Shake==1)
     cout <<NOS <<"Oreo Shake\n";
if (Oreo_Shake==2)
    cout <<NSS <<"Strawberry Shake";
}
else
    cout <<"The Confirmation name does not match with the Original name. Please try Again";






return 0;

}
