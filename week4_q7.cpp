#include<iostream>
using namespace std;
class T4Tutorials
{
	private:
		int n,i;
		public:
	T4Tutorials()
	{
		cout<<"Enter number to reverse: ";
		cin>>n;
	}
	void out()
	{
		cout<<endl<<"The reverse of the Entered number: ";
		for(i=n;n>0;n=n/10)
		{
			cout<<n%10;
		}
	}
};
int main()
{
	T4Tutorials r;
	r.out();
}
