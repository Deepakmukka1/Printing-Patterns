#include <iostream>
using namespace std;
int main()
{
   int numberOfRows;
   cout<<"Enter the number of rows: "<<"\n";
   cin>>numberOfRows;
   cout<<"\n";
   for(int i=0;i<numberOfRows;i++)
   {
   	for(int j=0;j<2*numberOfRows;j++)
   	{
   	   if(i==0)
   	   {
	    if(j>=i&&j<=numberOfRows-i-1)	
   	   cout<<"* ";
   }
   	   else if(j==i||j==2*numberOfRows-i-2)	
   	   cout<<"*";
   	   else
   	   cout<<" ";
	}
	cout<<"\n";
   }
}

