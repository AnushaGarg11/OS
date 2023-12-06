#include <iostream>
using namespace std;

int main(){
	int n1,n2;
	cout<<"Hello! Welcome to the program of First Fit Memory allocation algorithm!"<<endl;
	cout<<"Enter the number of Memory blocks: ";
	cin>>n1;
	int a[n1];
	int b[n1];
	cout<<"Enter the size of your memory blocks: "<<endl;
	for(int i=0;i<n1;i++){
		cin>>a[i];	
	}
	for(int i=0;i<n1;i++){
		b[i]=a[i];		
	}
	cout<<"Enter the number of processes: ";
	cin>>n2;
	int p[n2];
	cout<<"Enter the size of your processes: "<<endl;
	for(int i=0;i<n2;i++){
		cin>>p[i];
	}
	//int a[6]={300,600,350,200,750,125};
	//int b[6]={300,600,350,200,750,125};
	//int p[5]={115,500,358,200,375};
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1;j++){
			if(p[i]<=a[j]){
				cout<<"Process size "<<p[i]<<" is allocated to memory block "<<b[j]<<endl;
				a[j]=a[j]-p[i];
				break;
		}
	}
}
}
