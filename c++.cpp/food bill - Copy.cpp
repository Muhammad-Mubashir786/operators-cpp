#include<iostream>
using namespace std;
int main()
{
    int final_bill,order_amount,delivery_type,special_category,delivery_charge,discount;
    cout<<"please enter the order amount"<<endl;
    cin>>order_amount;
    cout<<"enter 1 for fast delivery and 2 for standard delivery"<<endl;
    cin>>delivery_type;
    cout << "press 3 if you want an item from special_category"<<endl;
    cin>>special_category;
    cout<<"press 4 if you want to pay via credit card"<<endl;
    cin>>discount;
    if (delivery_type==2 )
    {
        delivery_charge = 2 // standard delivery charge
        final_bill=order_amount+delivery_charge;
    }
    else  (delivery_type==1)
    {
        delivery_charge = 5 // fast delivery charge
        final_bill = order_amount + delivery_charge;
    }
    switch (special_category)
    {
    case 3:
        special_category=3; // special category fee
        final_bill = order_amount + delivery_charge+special_category;
        break;
    
    default:
    cout<<"invalid";
        break;
    }
    switch (discount)
    {
    case 4:
        final_bill = order_amount + delivery_charge - ((final_bill*10)/100);
                     break;

    default:
    cout<<"invalid"<<endl;
        break;
    }
    
    return 0;
}