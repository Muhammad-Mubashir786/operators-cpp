#include<iostream>
using namespace std;
const int gridsize=4;
int playerX=-1,playerY=-1;

int main(){
	int choice;
	do{
		cout<<" ";
		for(int i=1;i<=gridsize;i++){
			cout<<i<<" ";
		}
		cout<<endl;
		for(int i=1;i<=gridsize;i++){
			cout<<i<<" ";
			for(int j= 1;j<=gridsize;j++){
			if(i==playerY && j==playerX){
				cout<<"|O";
			}else{
				cout<<"|E";
			}
     	}
		cout<<"|"<<endl;
		}
	     cout<<"menu options \n1:place player\n2:move player\n3:exit game\n";
	      cin>>choice;
	     if(choice==1){
		cout<<"place player";
		cin>>playerX>>playerY;
		if(playerX<1||playerX>gridsize||playerY<1||playerY>gridsize){
			cout<<"invalid";
			playerX=-1;
			playerY=-1;
	    }else{
			cout<<"player placed sucessfully\n";
		}
    } else if(choice==2)	{
		if(playerX==-1 ||playerY==-1){
			cout<<"placed the player first"<<endl;
		}	else{
			cout<<"1 for left\n2 for right\n3 for up\n4 for down";
			int movechoice;
			cin>>movechoice;
			switch(movechoice){
			case 1:
		
				if(playerX>1)
				{
					playerX--;
					cout<<"player moved left";
				}
			    else
			    {
			    	cout<<"boundary reached  not moved";
				}
				break;
			case 2:
				
			    if(playerX<gridsize)
				{
					playerX++;
		            cout<<"player moved right";
				}
				else
				{
					cout<<"boundary reached  not moved";
	     		}
	     		break;
			case 3:
			    
				if(playerY>1)
				{
					playerY--;
					cout<<"player moved up";
				}
				else
				{
					cout<<"boundary reached  not moved";
				}
				break;
		    	
			case 4:
				
				if(playerY<gridsize)
				{
					playerY++;
					cout<<"player moved down";
				}
				else
				{
					cout<<"boundary reached  not moved";
				}
				break;
			default:
				
					cout<<"invalid choice";
			}
			}
		}
	else if(choice!=3)
	{
		cout<<"invalid choice";
	}
				
			}
	while(choice!=3);
	{
	cout<<"exiting game goodbye"<<endl;
	}
	return 0;
}
