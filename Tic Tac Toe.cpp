#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int login(){
	system("color A");
	char UNC[12] = {'S','a','a','d',' ','N','a','f','e','e','s','\0'};
	char UN[12];
	char pass[9] = {'s','a','a','d','s','a','u','d'};
	char pass1[9];
	cout << "Enter you Username: ";
	cin.getline(UN,12);
	cout << "Enter your password: ";
	int i =0 ;
	for(int j =0 ; j < 9 ; j++){
		if(i<9){
		pass1[j]=getch();
		cout << "*";}
		else {
			pass1[j]='\0';
	}
	}
	int c1=0;
	for(int o =0 ; o < 12 ; o++){
		if(UN[o] == UNC[o]){
		c1++;
		}
	}
	int c2=0;
	for(int o =0 ; o < 8 ; o++){
		if(pass1[o] == pass[o]){
			c2++;
	}
	}
	if (c1 == 12 && c2 == 8){
	 return 3;
}}
void board(int a);
int filling(int k,int l);
int wincheck(char ** p ,int u);
int main(){
	cout << "**************Welcome**************\n****************To*****************\n************Tic Tac Toe************\nEnter a valid username and password to enter into the game menu.\n";
	int vicx=0;
	int vic0=0;
	int losx=0;
	int los0=0;
	   ll1:
	   int log = login();
	   	char choice,a1,a2;
		int n,a;
	   if(log == 3){
		ll:
	    system("cls");
		cout << "*****Game menu*****\na. New game.\nb. Total victories of player X.\nc. Total victories of player 0.\nd. Exit\n";
		cin >> choice;
		if(choice=='a'){
			cout << "Enter N X N size of the game: ";
			cin >> n;
			board(n);
			cout << "Toss to begain the game.(Head(h),Tail(t))\nPlayer X: ";
			cin >> a1;
			cout << "Player 0: ";
			cin >> a2;
			a = rand() % 829+1;
			int x;
			if(a%2==0){
				cout << "Player X Wins the Toss.";
				x=0;
			}else{
				cout << "Player 0 Wins the Toss.";
				x=1;
			}
		int a=filling(n,x);
		if(a==3){
			vicx++;
			los0++;
			cout << "********Player X Wins*********";
		}
		else if(a==2){
			vic0++;
			losx++;
			cout << "*********Player 0 Wins********";
		}
		else if(a=1){
			cout << "********The Match is Draw********";
		}
		cout << "\nEnter Any key to go back to menu.\n";
        char any;
        cin >> any;
        goto  ll;
         }
		else if(choice=='b'){
			cout << "  Victories of Player X : " << vicx;
			cout << "\n\n  Loses of Player X :" << losx;
			cout << "\n\nEnter any key to get back to game menu.\n";
			char y ;
			cin >> y;
			goto ll; 
		}
		else if(choice=='c'){
		    cout << "  Victories of Player 0 : " << vic0;
			cout << "\n\n  Loses of Player 0 :" << los0;
			cout << "\n\nEnter any key to get back to game menu.\n";
			char y1 ;
			cin >> y1;
			goto ll;
		
		}
		else if(choice=='d'){
			return 0;
		}
		else{
			goto ll;
			cout  << "Enter a correct Choice.\n";
			
		}}
	else{
		cout << "\a\nInvalid Username or password.\nEnter a valid username or password.\n";
		goto ll1;
	}
}
void board(int a){
   system("cls");
cout << "*******Tic Tac Toe*******\n";
int p=1;
int c[a][a];
	 for(int i = 0 ; i<a ; i++){
	 	for(int j = 0 ; j < a ; j++){
	 	     cout  << " " << p ;
			  if(p<=9){
			  	cout << " ";
			  }
			  if (j < a-1){
			  cout << " |";
			  }
			 	p++;
		 }
		 cout << endl;
		 if(i<a-1){
		 for(int i = 0 ; i <a*5 ; i++)
	    	   cout << "-";
		 cout << endl;
	 }}
	 return;
}
int filling(int k,int l){
char n[k*k] = {'-'};
char c[k][k];
int d[k][k];
	for(int o=1 ;  o <=k*k+1 ; o++){
	system("cls");
cout << "*******Tic Tac Toe*******\n";
int p=1;
	 for(int i = 0 ; i<k ; i++){
	 	for(int j = 0 ; j < k ; j++){
	 	       d[i][j] = p ;
			  cout  << " " << p ;
			  if(p<=9){
			  	cout << " ";
			  }
			  if (j < k-1){
			  cout << " |";
			  }
			 	p++;
		 }
		 cout << endl;
		 if(i<k-1){
		 for(int i = 0 ; i <k*5 ; i++)
	    	   cout << "-";
		 cout << endl;
	 }}
     cout << endl;
	 for(int i = 0 ; i<k ; i++){
	 	for(int j = 0 ; j < k ; j++){
	 	     if(o==1)
			 c[i][j] = n[0];
	 	     cout  << " " <<   c[i][j];
			  	cout << " ";
			  if (j < k-1){
			  cout << "|";
			  }
		 }
		 cout << endl;
		 if(i<k-1){
		 for(int i = 0 ; i <k*4 ; i++)
	    	   cout << "-";
		 cout << endl;
	 }}
	  	int pxc=0,pxcr=0,xrc=0,xcc=0;
		int p0c=0,p0cr=0,rc0=0,cc0=0;
		for(int i = 0 , m=k-1 ; i<k , m >= 0 ; i++,m--){
		     if (c[i][i]=='X'){
		     	pxc++;
			 }
			 if(c[i][i]=='0'){
			 	p0c++;
			 }
			 if(c[m][i] == '0'){
			 	p0cr++;
			 }
			 if( c[m][i] == 'X'){
			 	pxcr++;
			 }}
			 for(int i =0 ; i<k ; i++){
			 for(int j = 0 ; j<k ; j++){
			 if( c[i][j]  == 'X'){
			 	xrc++;
			 }
			 if( c[i][j]  == '0'){
			 	rc0++;
			 }
			 if( c[j][i] == '0'){
			 	cc0++;
			 }
		     if( c[j][i] == 'X'){
			 	xcc++;
			 }
			 if(xrc==k){
			 	return 3;
				 }
			 else if(xcc==k){
			 	return 3;
			 }	
			  if( rc0==k){
			 	 return 2;
			 }
			 else if(cc0==k){
			 	return 2;
			 }
			 }
			 xrc=0;xcc=0;rc0=0;cc0=0;
		}
		if(p0c==k || p0cr==k){
			return 2;
		}
		else if(pxc==k || pxcr==k )
		{
			return 3;
		}
		if(pxc+pxcr+xrc+xcc+p0c+p0cr+rc0+cc0 != k && o==k*k+1){
			return 1;
		}
		
	if(o<k*k+1){
		
	 	 int choice = 0;
		 if (o%2 == 0)
		 {
		 	if(l==0);
		 	l=l-1;
		 	l1:
		 	cout << "Player X:\n";
		    cout << "Enter Choice :";
			cin >> choice;
		    if(choice > 0 && choice <= k*k){
			
		    for(int i=0 ; i<k ; i++){
		    for(int y=0 ; y<k ; y++){
		    if(choice == d[i][y] && l==0){
					 if(c[i][y] ==  '0'){
	              	cout << "Choice used by the other player.\n";
	              	goto l1;
				  }
				  else if(c[i][y] == '-'){
					 c[i][y] = 'X';
				}
				else{
					cout << "Already used by yourself.\n";
					goto l1;
				}
			}
		}
			}}
			else{
				cout << "Invalid choice.\n";
				goto l1;
			}
		}
		 else if(o%2 == 1){
		    if(l==1);
		          l=l+1;
		          l2:	
		 	cout << "Player 0:\n";
		    cout << "Enter Choice :";
			cin >> choice;
		     if(choice > 0 && choice <= k*k){
			 for(int i=0 ; i<k ; i++){
		    for(int y=0 ; y<k ; y++){
		    if(choice == d[i][y] && l==1){
	              if(c[i][y] ==  'X'){
	              	cout << "Choice used by the other player.\n";
	              	goto l2;
	              	}
				  else if(c[i][y] == '-'){
				   c[i][y] = '0';	
			}
			else {
				cout << "Already used by yourself.\n";
				goto l2;
			}
		}	}
			}}
			else{
				cout << "Invalid choice.\n";\
				goto l2;
			}
		 }
	 }
 
}
	

}
int wincheck(char ** p , int  u){
	}
	

