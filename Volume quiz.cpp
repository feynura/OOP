/*Name:Kento Feynura
Reg no:Bscit-05-0151/2024
Campus:TRC
GitUsername:feynura*/

#include <cmath> 
using namespace std;

double calculatecylindervolume(double radius, double height) {
	double volume= M_PI*radius*radius*height;
	return volume;
}
 int main(){
 	double radius, height;
 	cout<<"enter the radius of the cylinder:";
 	cin>>radius;
 	
 	cout<<"enter the height of the cylinder:";
 	cin>>height;
 	
 	double volume= calculatecylindervolume(radius, height);
 	cout<<"The volume of the cylinder is:"<<volume<<endl;
 	
 	return 0;
 	
 }
