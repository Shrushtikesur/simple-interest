#include<iostream.h>
#include<conio.h>

void main()
{
	int P,R,T,SI=0;
	clrscr();

	cout<<"\n\n";
	cout<<"enter principle amount , rate and time :\n";
	cin>>P>>R>>T;

	cout<<"\nprinciple amount:"<<P<<endl;
	cout<<"rate of interest:"<<R<<endl;
	cout<<"Time period:"<<T<<endl;

	SI=(P*R*T)/100;

	cout<<"\nsimple interest="<<SI;
	cout<<endl;
getch();
}

