// Take numbers inputted by the user and calculate the average

#include <iostream>
using namespace std;

int main()
{
	float nums = 0;  //variable used to store how many numbers to go to
	float avg = 0;  //variable used to store numbers inputted by user
	float avgTotal = 0;  //variable that divided to find the average
	float avgSum = 0;  //variable that adds up the numbers inputted from `avg`
	
	cout << "How many numbers will you be entering? ";
	cin >> nums;
	
	for (int i = 1; i <= nums; i++)
	{
		cout << "Enter number " << i << ": ";
		cin >> avg;
		avgSum += avg;  //adds all the numbers
		
		avgTotal = (avgSum/nums);  //divides the numbers by the amount of numbers inputted by the user
	}
	
	cout << "Your average is: " << avgTotal;

}
