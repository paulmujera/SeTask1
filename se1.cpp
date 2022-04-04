#include<iostream>
using namespace std;

class Vehicle{
	private:
		int wheels, doors;
	
	public:
		void getDetails(){
			cout<<"Enter number of doors :"<<endl;
			cin>>doors;
			cout<<"Enter number of wheels:"<<endl;
			cin>>wheels;
		}
		
		void typeOfCar(int wheel, int doors){
			if(wheels == 2 && doors == 0){
				cout<<"Motor-cycle"<<endl;
			}
			else if(wheels == 3 && doors == 2){
				cout<<"tuktuk"<<endl;
			}
			else if(wheels == 4 && doors == 4){
				cout<<"Saloon car"<<endl;
			}
			else if(wheels > 4 && doors == 2){
				cout<<"Truck"<<endl;
			}
			else{
				cout<<"Invalid"<<endl;
			}
		}
		
		void print(){
			typeOfCar(wheels, doors);
		}
		
};

int main (){
	Vehicle obj1;
	obj1.getDetails();
	obj1.print();