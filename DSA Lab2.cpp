#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	
	string grade;
	int aCount;
	int bCount;
	int cCount;
	int dCount;
	int fCount;
	aCount=0;
	bCount=0;
	cCount=0;
	dCount=0;
	fCount=0;
	
	cout<<"Enter the letter grades."<<endl;
	cout<<"Enter the EOF character to end input\n";
	while (grade!="EOF")
	{
	
    cin>>grade; 
  	
  	if (grade=="A"||grade=="a")
	  {
	  
  	++aCount;
      }
  		else if (grade=="B"||grade=="b")
  		{
  		++bCount;
    	}
  		else if (grade=="C"||grade=="c")
  		{
  		++cCount;
  		}
  		else if (grade=="D"||grade=="d")
  		{
		  
  		++dCount;
    	}
  		else if (grade=="F"||grade=="f")
  		{
  		++fCount;
    	}
    	else if (grade=="EOF"||grade=="eof")
    	{
    	    cout<<"Input end\n";
    	}
  		else {
  		cout<<"Incorrect grade entered.\n";
		cout<<"Enter correct grade"<<endl;
    	}
  	}
	
	cout<<"\n\nTotals for each letter grade are:";
	cout<<"\nA: "<<aCount;
	cout<<"\nB: "<<bCount;
	cout<<"\nC: "<<cCount;
	cout<<"\nD: "<<dCount;
	cout<<"\nF: "<<fCount<<endl;
	
	system ("pause");
	return 0;
}
