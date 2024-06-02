#include<iostream>
using namespace std;

int main(){
    int num,i,num2=1,nextNumber;
    cout<<"Enter a number to the term in fibonacci sequence"<<endl;
    cin>>num;
    while (i<num)
    {
        cout<<i<<" ";
        nextNumber=i+num2;
        i=num2;
        num2=nextNumber;
    }
    cout<<endl;
}
//         nextNumber=num+num2;
//         num=num2;
//         num2=nextNumber;
//     }
//     cout<<num2;
    
//     return 0;
// }