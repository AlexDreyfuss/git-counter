#include <iostream>
#include <thread>
using namespace std;

/* The func counts down from 12 to 1 and then blinks a message
*/
void main()
{
	for (size_t i = 12; i > 0; i--)
	{
		cout << "\rTime until takeoff: " << i << " ";
		std::this_thread::sleep_for(1s);
		//system("cls");
	}
	system("cls");
	for (size_t i = 0; i < 10; i++)
	{	
		cout << "\rTakeoff";
		std::this_thread::sleep_for(250ms);
		cout << "\r       ";
		std::this_thread::sleep_for(250ms);
	}
}