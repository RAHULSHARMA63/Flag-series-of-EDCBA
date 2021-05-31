#include<iostream>
using namespace std;
int main()
{
	char i,j;
	for(i='A';i<='E';i++)
	{
		for(j='E';j>=i;j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}

  return 0; 	
}
