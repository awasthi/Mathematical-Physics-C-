#include<iostream>
using namespace std;
int main()
{
	float max_accelerate_speed = 60; //in mph
	float duration = 15; //in minutes
	float max_acceleration_in_meter_per_second = 60 * 0.445/duration; //m/s
	float acceleration_need = 55; //mph
	float acceleration_need_in_meter_per_second = 55 * 0.445; //m/s
	float distance = 268; // meters
	float acceleration = (acceleration_need_in_meter_per_second* acceleration_need_in_meter_per_second / distance)/2;
	
	cout << "If The acieved acceleration " << acceleration << " is less than " << max_acceleration_in_meter_per_second << "Then YES." << endl;

}
