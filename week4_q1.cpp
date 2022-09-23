#include <iostream>
using namespace std;
class T4Tutorials_Decimal_Number
{
	public:
		T4Tutorials_Decimal_Number(int n)
		{
		int i=1,j=n,T4Tutorials_Binary_Number=0;
	     		cout<<"Please enter Decimal  number : ";
				cin>>n;
				for(j=n;j>0;j=j/2)
				{
					T4Tutorials_Binary_Number=T4Tutorials_Binary_Number+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<"binary number ="<<T4Tutorials_Binary_Number;
			}
		};
		int main()
		{
			T4Tutorials_Decimal_Number obj(4);

		}
