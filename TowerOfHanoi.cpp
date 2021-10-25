#include<iostream>
using namespace std;

void towerHanoi(int num_disk, char *origin, char *intermediate , char *destination){
 	if (num_disk > 0){
		towerHanoi(num_disk -1, origin, destination, intermediate);
		
		cout<<"Mover disco "<< num_disk <<" desde la torre " << origin << " hasta la torre "<< destination<<endl;

		towerHanoi(num_disk-1, intermediate, origin, destination);
	}
}
int main(){
	int disk;
	cout<<"ingresa el numero de discos:";
	cin>>disk;
	towerHanoi(disk, "A", "B", "C");
    return 0;
}
