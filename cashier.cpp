#include <iostream>
using namespace std;

struct grocery{
    string item;
    int qty,price;
};

int main(){
    system ("clear");
    int no_item,total,n,i;
    cout<<"+----------------------------------+"<<endl;
    cout<<"|        Welcome to Walmart        |"<<endl;
    cout<<"+----------------------------------+"<<endl;
    cout<<"|What would you like to buy today? |"<<endl;
    cout<<"|1. Bread loaf                20000|"<<endl;
    cout<<"|2. Milk                      15000|"<<endl;
    cout<<"|3. Salad                     30000|"<<endl;
    cout<<"|4. PS5                    10000000|"<<endl;
    cout<<"|5. Ice Cream                 12000|"<<endl;
    cout<<"+----------------------------------+"<<endl;
    cout<<"|How many items do you want to buy?|"<<endl;
    cout<<"+----------------------------------+"<<endl;
    cin>>n;
    grocery lists[n];
    cout<<"+----------------------------------+"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<"+----------------------------------+"<<endl;
        cout<<"|Item Number (1-5) :               |"<<endl;
        cout<<"+----------------------------------+"<<endl;
        cin>>no_item;
        if (no_item==1)
        {
            cout<<"Quantitiy :" ;
            cin>>lists[i].qty;
            lists[i].item="Bread loaf  ";
            lists[i].price=20000;
        }
        else if (no_item==2)
        {
            cout<<"Quantitiy :" ;
            cin>>lists[i].qty;
            lists[i].item="Milk        ";
            lists[i].price=15000;
        }
        else if (no_item==3)
        {
            cout<<"Quantitiy :" ;
            cin>>lists[i].qty;
            lists[i].item="Salad       ";
            lists[i].price=30000;
        } 
        else if (no_item==4)
        {
            cout<<"Quantitiy :" ;
            cin>>lists[i].qty;
            lists[i].item="PS5         ";
            lists[i].price=10000000;
        } 
        else if (no_item==5)
        {
            cout<<"Quantitiy :" ;
            cin>>lists[i].qty;
            lists[i].item="Ice Cream   ";
            lists[i].price=12000;
        }
        else{
            cout<<"There is no such item!";
        }
        cout<<"+----------------------------------+"<<endl<<endl;
    }
        system ("clear");
        cout<<"+-------------------------------+"<<endl;
        cout<<"|            Receipt            |"<<endl;
        cout<<"+-------------------------------+"<<endl;
    total=0;
    for (i = 0; i < n; i++)
    {
        total=total+(lists[i].price*lists[i].qty);
        cout<<""<<lists[i].item<<"     "<<lists[i].qty<<"      "<<lists[i].price<<endl;
    }
    cout<<"+-------------------------------+"<<endl;
    cout<<"|TOTAL AMOUNT           "<<total<<"|"<<endl;
    cout<<"+-------------------------------+"<<endl;
}