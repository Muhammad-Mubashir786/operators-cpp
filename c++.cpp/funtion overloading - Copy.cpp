#include<iostream>
using namespace std;
void asterisk();
int asterisk(int);
void asterisk(int,char);
int main(){
    asterisk();
    int number;
    cout<<"Enter a number to print asterisk"<<endl;
    cin>>number;
    asterisk(number);
    asterisk(number,'#');
    return 0;
}
void asterisk(){
    for(int i=0;i<10;i++){
        cout<<"*"<<"\n ";
    }
}
int asterisk(int num){
    for (int i = 0; i < num; i++)
    {
        cout<<"*"<<" ";
    }
    return num;
}
void asterisk(int num,char a){
    for (int i = 0; i < num; i++)
    {
        cout<<a;
    }
    
}


