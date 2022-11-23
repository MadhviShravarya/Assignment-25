#include<iostream>
using namespace std;
class T4Tutorials_Factorial_Number
{
	private:
			int n,n1,f=1;
	public:
		void input();
		void calc();
		void display();
};
void T4Tutorials_Factorial_Number::input()
{
	cout<<"Please Enter a no.:”<<endl;
	cin>>n;
}
void T4Tutorials_Factorial_Number::calc()
{
	n1=n;
	if(n==0||n==1)
	cout<<" Factorial  of "<<n<<" is 1”<<endl;
	else
	{
		while(n>0)
		{
			f=f*n;
			n--;
		}
	}
 
}
void T4Tutorials_Factorial_Number::display()
{
		cout<<" The Factorial  of "<<n1<<" is "<<f;
}
int main ()
{
	T4Tutorials_Factorial_Number object;
	object.input();
	object.calc();
	object.display();
}
