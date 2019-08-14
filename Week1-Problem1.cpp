#include<iostream>
using namespace std;
int main()
{
	float distance_travelled = 60; //in miles
	float duration = 2; //in hours
	
	
	cout << "How much miles distance is travelled? ";
	cin >> distance_travelled;

	cout << endl << "How much time (in hours)? ";
	cin >> duration;
	float speed = distance_travelled / duration; //mph
	cout << "The speed of the train is " << speed << " miles per hours." << endl;

}
