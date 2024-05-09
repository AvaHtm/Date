#include<iostream>
using namespace std;
class Date{
public:
	int y,m,d;
	char namedate[10];
	Date(char tempname[10])//constructor for name
{
	name=tempname;
}
	int checkrange(int a,int b)//for Validation
	{
		int temp;
			do{
				cout<<"enter value";
				cin>>temp;
			}while(temp>a&&temp<b);
		return temp;
	}
	void get y()
		y=checkrange(0,1403);
	void get m()
		m=checkrange(1,12);
	void get d()
		d=checkrange(1,30);
	int caldays()//calculation days
		return y*365+m*30+d;
	int caldiff(Date d1,Date d2,int &ty,int&tm,int&td)//Calculate the value difference
	{
		int diff=0;
		int days d1=d1.caldays();
		int days d2=d2.caldays();
		if(days d1>days d2)
			diff=days d1-days d2;
		else
			diff=days d2-days d1;
		ty=int diff/365;
		tm=int (diff%365)/30;
		td=diff-ty*365-tm*30;
		return diff;
	}
};
int main()
{
	char n1[10] , n2[10];
	int tfavot y,tfavot m,tfavot d;
	cout<<"enter name date one";
	cin>>n1;
	cout<<"enter name date 2";
	cin>>n2;
	Date d1=new Date(n1);//date 1 and name
	Date d2=new Date(n2);//date 2 and name
	d1.get y();d1.get m();d1.get d();//get date one
	d2.get y();d2.get m();d2.get d();//get date two
	int findbigger=0;
	findbigger=caldiff(d1,d2,tfavot y,tfavot m,tfavot d);
	cout<<"diff y:"<<tfavot y<<"diff m:"<<tfavot m<<"diff d:"<<tfavot d;
	cout<<find bigger<<"is bigger"<<endl;
	return 0;
}
