#include<iostream>
#include<string>
using namespace std;
int main()
{
	int choise,age,num,num2;
	int payment,payment2,age2;
	string name;
	string name2;
	cout<<"WELCOME TO PVR"<<endl;
	cout<<"****1.animal*****"<<endl;
	cout<<"****2.sambahadur***"<<endl;
	cout<<"which movie you would like to watch"<<endl;
	cin>>choise;
		
	if(choise==1)
	{
	cout<<"please enter your name"<<endl;
		cin>>name;
		cout<<"please enter your age"<<endl;
		cin>>age;
		if(age>=18)
		{
			cout<<"your totall payable amount is 220"<<endl;
			cout<<"which payment method you want to use paytm,phonepay,upi"<<endl;
			cin>>payment;
			cout<<"please enter your number"<<endl;
			cin>>num;		
			cout<<"thanks for your booking "<<endl;
			cout<<"your ticket will be sent via txt"<<endl;
		}
		else
		{
			cout<<"you are minor can not watch"<<endl;
		}
	}
	if(choise==2)
	{
		cout<<"please enter your name"<<endl;
		cin>>name2;
		cout<<"please enter your age"<<endl;
		cin>>age2;
		cout<<"your totall payable amount is 110"<<endl;
		cout<<"which payment method you want to use paytm,phonepay,upi"<<endl;
		cin>>payment2;
		cout<<"please enter your number"<<endl;
		cin>>num2;
		cout<<"thanks for the booking"<<endl;
		cout<<"your ticket will be sent via txt"<<endl;
	}
}
