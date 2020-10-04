#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num_start;
    int num_end;
    int sum;
    int avg;
    int count;
    num_start=1;
    sum=0;
    count=0;
    cout<<"At what number would you like the count to end?\n";
    cin>>num_end;
        while(num_start<=num_end)
         {
            sum=sum+num_start;
            num_start=num_start+2;
            count=count+1;
         }
    avg=sum/count;
    cout<<"\nThe sum is: "<<sum<<"\n";
    cout<<"The average is: "<<avg<<"\n";
    
    system ("pause");
    return 0;
}

