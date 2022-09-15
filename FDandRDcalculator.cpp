#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#define ld long double 
using namespace std;





/* qt--> 1 year is divided into 4 quaters, if there will be 2 yrs then there will be 8 quaters
qr--> Quaterly rate is rate divided by 4
inter--> This show quaterly interest
toi--> Total interest
amt--> principal+ total interest
*/

void menu();
ld RD_year()
{
	 ld p,r,t,amount=0;
	
	cout<<"\n  enter principal\t =   \t";
	cin>>p;
	
	cout<<"  enter rate\t\t =   \t";
	cin>>r;
	
	cout<<"  enter time in years   = \t";
	cin>>t;	
	
	ld m = t*12;
	ld inter =0;
	ld total=0;

	for(int i=1;i<=m;i++)
	{  amount += p;
		total += p;
		inter += total*r/100/12;
		
		if(i%3 ==0)
		{ total+= inter;
			inter = 0;
			
		}
	}
	


    cout<<"\n  Interest\t = \t"<<total-amount;
    cout<<"\n  Mature Amount  =\t"<<total<<endl;
    
    cout<<"\n\t---tab any key  to show MENU--\n";
    getch();
    system("cls");
    
    
    menu();
 } 
ld RD_month()
{
	 ld p,r,t,amount=0;
	
	cout<<"\n  enter principal\t =   \t";
	cin>>p;

	cout<<"  enter rate\t\t =   \t";
	cin>>r;
	
	cout<<"  enter time in months(multiple of 3)   = \t";
	cin>>t;	
	
	ld m = t;
	ld inter =0;
	ld total=0;

	for(int i=1;i<=m;i++)
	{  amount += p;
		total += p;
		inter += total*r/100/12;
		
		if(i%3 ==0)
		{ total+= inter;
			inter = 0;
			
		}
	}
	

    cout<<"\n  Interest\t = \t"<<total-amount<<endl;
    cout<<"\n  Mature Amount  =\t"<<total<<endl;
    
    cout<<"\n\t---tab any key  to show MENU--\n";
    getch();
    system("cls");
    
    menu();
 } 
 


//SI
 ld FD_year()
 {
 	ld p,r,t;
	
	cout<<"\n  enter principal\t =   \t";
	cin>>p;
	ld amount = p;
	cout<<"  enter rate\t\t =   \t";
	cin>>r;
	
	cout<<"  enter time in years   = \t";
	cin>>t;	
	
 	ld inter = 0;
 	while(t)
	 {
	 	inter += (p*r)/100;
	 	p+= inter;
	 	t--;
		  } 	
 
 	
    cout<<"\n  Interest\t = \t"<<inter;
    cout<<"\n  Mature Amount  =\t"<<amount+inter<<endl;
    
    cout<<"\n\t---tab any key  to show MENU--\n";
    getch();
    system("cls");
    
    
    menu();
 }
 //SI
  ld FD_month()
 {
 	ld p,r,t;
	
	cout<<"\n  enter principal\t = \t";
	cin>>p;
	ld  amount = p;
	cout<<"  enter rate\t\t = \t";
	cin>>r;
	
	cout<<"  enter time in months (multiple of 3) = \t";
	cin>>t;	
 	
 	ld inter = 0;
 	
 	for(int i=3;i<=t;i+=3)
 	{
 		 inter = p*r*i/12/100;
 		 p+=inter;	
		 
		 
	 }
 	
 
    cout<<"\n  Interest\t = \t"<<inter;
    cout<<"\n  Mature Amount  =\t"<<amount+inter<<endl;
    
    
    cout<<"\n\t---tab any key  to show MENU--\n";
    getch();
    system("cls");
    menu();
 }
void menu()
{   
	cout<<"\t--------MENU----------\n";
	cout<<"  1 -> for find FD Interest in year wise Investment\n";
	cout<<"  2 -> for find FD Interest in month wise Investment\n";
	cout<<"  3 -> for find RD Interest in year wise Investment\n";
	cout<<"  4 -> for find RD Interest in month wise Investment\n";
	cout<<"  0 -> exit\n";
	
	int choice;
	cout<<"  Enter your choice  in (eg :- 1,2 etc.) = \t";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			FD_year();
			break;
		case 2:
			FD_month();
			break;
		case 3:
			RD_year();
			break;
		case 4:
			RD_month();
			break;
		default:
			cout<<"\n    -----Thank you for using software-----\n";
			break;			
	}
}
int main()
{
system("cls");
menu();

	return 0;
}
