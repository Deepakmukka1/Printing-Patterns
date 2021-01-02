#include <iostream>
using namespace std;
int main()
{
   int numberOfRows;
   cout<<"Enter the number of rows: "<<"\n";
   cin>>numberOfRows;
   for(int i=0;i<numberOfRows;i++)
   {
   	for(int j=0;j<numberOfRows;j++)
   	{
   		if(j>=numberOfRows-i-1)
   		{
   		cout<<"* ";	  
		}
		else
		{
			cout<<" ";
		}
 
	}
	cout<<"\n";
   }
}

