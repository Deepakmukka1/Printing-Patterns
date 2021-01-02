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
   	for(int j=0;j<numberOfRows;j++)
   	{	
   	  if(j>=i)
   		cout<<"*";	
   		else
   		cout<<" ";
	
	
	}
	cout<<"\n";
   }
}

