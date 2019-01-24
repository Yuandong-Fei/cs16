#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int input;
	float response_number = 0;
	string question = "Enter the value of the"
		" parameter 'n' in the Leibniz formula"
	        " (or negative number to quit): ";
	string response_string = "The approximate value of pi" 
				 " using ";
	cout<< question<<endl;
	cin>> input;
	int input_2 = input+1;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	while(input >= 0)
	{
		for (input; input >=0; input --)
		{
			response_number+=4*(pow(-1,(input))/(2*(input)+1));
		}
		cout<<response_string<<input_2<<" terms is : "<<
			response_number<<endl;
		response_number = 0;
		cout<<question<<endl;
		cin>>input;
		input_2 = input +1;
	}

	return 0;
}

