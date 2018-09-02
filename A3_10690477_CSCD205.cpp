 #include <iostream>
using namespace std;
int main()
{
	int n ;
	cout<<"Enter your exams score:";
	cin>>n;
	if(n>80 && n<100)
	{
		cout<<"You had A";
	}
	else if (n>75 && n<80 )
	{
		cout<<"You had B+";
	}
	else if (n>70 && n<75)
	{
	cout<<"You had B";
	}
	else if (n>65 && n<70)
	{
		cout<<"You had C+";
	}
	else if (n>60 && n<65)
	{
		cout<<"You had C";
	}
	else if (n>55 && n<60)
	{
		cout<<"You had D+";
	}
	else if (n>50 && n<55)
	{	
		cout<<"You had D";
	}
	else if (n>45 && n<50)
	{
		cout<<"You had E";
	}
	else if (n>0 && n<45)
	{
		cout<<"You had F";
	}
	return 0;
}
