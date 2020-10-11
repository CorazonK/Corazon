/*Group Three
1. Corazon Karoki - 096980
2. Vivian Rono - 105602
3. Timothy Obosi - 134100
4. Wendy Kinara - 097454
5. Kevin Iraya - 130036
PSEUDOCODE
-Checking whether a given year is a leap year or not.
-Input: User provided year.
-Output: Boolean true or False.
Step 1: Declare the variable i.e. year.
Step 2: Prompt the user to input the year.
Step 3: Store the value in the already declared variable i.e. year.
Step 4: Check if the year is divisible by 4. If yes, then proceed to step 5. Otherwise, go to step 8.
Step 5: Check if the number is divisible by 100. If yes, then proceed to step 6. Otherwise, go to step 7.
Step 6: Check if the number is divisible by 400. If yes, then proceed to step 7. Otherwise, go to step 8.
Step 7: The year is a leap year
Step 8: The year is not a leap year.
Step 5: Give the required output; either true or false.
*/
#include <iostream>
#include <string>

using namespace std;

bool checkLeapYear(int year)//Create a separate function that receives the years and does the computation. Declare the variable.
{
    if (year%4==0)
    {
    	if (year%100==0)
    	{
    		if (year%400==0)
    		return true;
    		else
    		return false;
		}
		else
		return true;
		}
    else
    return false;//For boolean operators,the output for true is given as 1 and false is given as 0.
}
int main()
{
    int year;//Declare the variable i.e. year.
    cout<<"Input Year\n";//Prompt the user to input the year.
    cin>>year;//Store the value in an already declared variable (year). The variable is given a value input by the user.
    cout<<checkLeapYear(year)<<endl;//Call to the function. Give output.
    system ("pause");
    return 0;
    }
