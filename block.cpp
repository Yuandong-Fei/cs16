#include <iostream>
using namespace std;

int main()
{
    	string question = "Enter number of rows and columns: \n";
	int var1,var2;
	// var1 = row; var2 = column;
	cout<< question;
	cin>> var1 >> var2;

	for(int y = var1; y > 0; y--)
	{
		int x = var2;
		if(x == 0)
		{
			break;
		}
		while(x>0)
		{
			cout<<"X.";
			x-=1;
		}
	}
	cout<<"\n";
	cout<<question;
	cin>> var1>> var2;
	return 0;

}

